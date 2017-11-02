#############################################################################
# Copyright 2017 OceanScan - Marine Systems & Technology, Lda.              #
#############################################################################
# Licensed under the Apache License, Version 2.0 (the "License");           #
# you may not use this file except in compliance with the License.          #
# You may obtain a copy of the License at                                   #
#                                                                           #
# http://www.apache.org/licenses/LICENSE-2.0                                #
#                                                                           #
# Unless required by applicable law or agreed to in writing, software       #
# distributed under the License is distributed on an "AS IS" BASIS,         #
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  #
# See the License for the specific language governing permissions and       #
# limitations under the License.                                            #
#############################################################################
# Author: Ricardo Martins                                                   #
#############################################################################

# Validate CMake version.
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

if(COMMAND CMAKE_POLICY)
  cmake_policy(SET CMP0003 NEW)
endif(COMMAND CMAKE_POLICY)

project("IMC")
set(CMAKE_CXX_STANDARD 98)

set(IMC_TAG "master" CACHE STRING "IMC git branch name, commit id or tag")
set(IMC_URL "https://github.com/oceanscan/imc" CACHE STRING "IMC git URL")

# Set a default build type if none was specified.
if(COVERAGE)
  set(_default_build_type "Debug")
else()
  set(_default_build_type "Release")
endif()

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message(STATUS "Setting build type to '${_default_build_type}' as none was specified.")
  set(CMAKE_BUILD_TYPE "${_default_build_type}" CACHE STRING "Choose the type of build." FORCE)
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY
    STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

##########################################################################
#                            Code Coverage                               #
##########################################################################

option(COVERAGE "Run code coverage analysis" FALSE)

if(COVERAGE)
  # Check for valid compiler.
  if(NOT CMAKE_COMPILER_IS_GNUCXX)
    message(FATAL_ERROR "Code coverage requires the GNU C++ Compiler")
  endif()

  # Find gcov.
  find_program(GCOV_PATH gcov)
  if(NOT GCOV_PATH)
    message(FATAL_ERROR "Failed to find gcov")
  endif()

  # Find lcov.
  find_program(LCOV_PATH lcov)
  if(NOT LCOV_PATH)
    message(FATAL_ERROR "Failed to find lcov")
  endif()

  # Find genhtml.
  find_program(GENHTML_PATH genhtml)
  if(NOT GENHTML_PATH)
    message(FATAL_ERROR "Failed to find genhtml")
  endif()

  # Compiler flags.
  set(CMAKE_CXX_FLAGS "-O0 --coverage -ftest-coverage -fprofile-arcs")

  # Only dune-core for now.
  set(_folder "CMakeFiles/imc.dir")

  # Setup target
  add_custom_target(coverage
          # Run baseline lcov.
          ${LCOV_PATH} --capture --initial --directory "${_folder}" --output-file lcov_base.info

          # Cleanup lcov.
          COMMAND ${LCOV_PATH} --directory . --zerocounters

          # Run tests.
          COMMAND ctest

          # Capture lcov counters.
          COMMAND ${LCOV_PATH}
          --capture
          --directory .
          --output-file lcov_test.info

          COMMAND ${LCOV_PATH}
          --add-tracefile lcov_base.info
          --add-tracefile lcov_test.info --output-file lcov_all.info

          COMMAND ${LCOV_PATH}
          --remove lcov_all.info '*/tests/*' '/usr/*'
          --output-file lcov.info

          # Generate report.
          COMMAND ${GENHTML_PATH} --demangle-cpp -o coverage lcov.info
          COMMAND ${CMAKE_COMMAND} -E remove lcov_base.info lcov_test.info lcov_all.info lcov.info

          WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
          )

  add_custom_command(TARGET coverage POST_BUILD
          COMMAND ;
          COMMENT "Coverage file://${CMAKE_BINARY_DIR}/coverage/index.html"
          )
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
  if(CMAKE_COMPILER_IS_GNUCXX)
    SET(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
  endif()
endif()

##########################################################################
#                            Compiler Flags                              #
##########################################################################

include(CheckCXXCompilerFlag)

check_cxx_compiler_flag(-Wextra _cc_wextra)
if(_cc_wextra)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wextra")
endif()

check_cxx_compiler_flag(-pedantic _cc_pedantic)
if(_cc_pedantic)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic")
endif()

##########################################################################
#                               Generator                                #
##########################################################################

message(STATUS "Looking for Python interpreter")
find_program(PYTHON_EXE NAMES python)
if(PYTHON_EXE)
  message(STATUS "IMC code generation enabled")
else()
  message(STATUS "IMC code generation disabled")
endif()

if(PYTHON_EXE)
  if(EXISTS "${CMAKE_BINARY_DIR}/imc/IMC.xml")
    set(IMC_XML ${CMAKE_BINARY_DIR}/imc/IMC.xml)
  else()
    set(IMC_XML ${CMAKE_BINARY_DIR}/IMC/IMC.xml)
  endif()
  set(IMC_FOLDER ${PROJECT_SOURCE_DIR}/src)
  set(IMC_TEST_FOLDER ${PROJECT_SOURCE_DIR}/tests)

  # Download.
  add_custom_target(download
          COMMAND ${PYTHON_EXE} -m imctrans.cli download -u ${IMC_URL} -t ${IMC_TAG} -o ${CMAKE_BINARY_DIR}/IMC
          WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/../../../../imctrans
    )

  # Generate.
  macro(imc_target_imc target_name extra_flags)
    add_custom_target(${target_name}
            COMMAND ${PYTHON_EXE} -m imctrans.cli translate
              ${extra_flags}
              -l cpp
              -n
              -x ${IMC_XML}
              -o ${IMC_FOLDER}
              -t ${IMC_TEST_FOLDER}/test_Messages_All.cpp

            WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/../../../../imctrans

            DEPENDS ${xml})
  endmacro()

  imc_target_imc(generate "")
  imc_target_imc(generate_force "-f")
endif(PYTHON_EXE)

##########################################################################
#                             IMC Library                                #
##########################################################################
file(GLOB_RECURSE IMC_SOURCES "${PROJECT_SOURCE_DIR}/src/IMC/*.cpp")
file(GLOB_RECURSE IMC_HEADERS "${PROJECT_SOURCE_DIR}/src/IMC/*.hpp" "${PROJECT_SOURCE_DIR}/src/IMC/*.xdef")
file(GLOB_RECURSE IMC_DEFS    "${PROJECT_SOURCE_DIR}/src/IMC/*.xdef")
string(REPLACE ";" " " IMC_HEADERS_STRING "${IMC_HEADERS}")

foreach(header ${IMC_HEADERS})
  string(REGEX REPLACE "${PROJECT_SOURCE_DIR}/" "" header ${header})
  string(REGEX REPLACE "src" "include" destination ${header})
  get_filename_component(destination ${destination} PATH)
  install(FILES ${header} DESTINATION ${destination})
endforeach(header ${IMC_HEADERS})

include_directories(${IMC_GENERATED}/src ${PROJECT_SOURCE_DIR}/src ${IMC_VENDOR_INCS_DIR})
set(IMC_FILES ${IMC_SOURCES} ${IMC_VENDOR_FILES})

add_library(imc SHARED ${IMC_FILES} ${IMC_HEADERS})
set_target_properties(imc PROPERTIES DEFINE_SYMBOL IMC_DLL_EXPORT)
target_link_libraries(imc ${IMC_SYS_LIBS})

##########################################################################
#                             Unit Tests                                 #
##########################################################################
enable_testing()
macro(imc_test source)
  get_filename_component(executable ${source} NAME_WE)
  add_executable(${executable} ${source})
  target_link_libraries(${executable} imc ${IMC_SYS_LIBS})
  add_test(${executable} ${executable})
  if(COVERAGE)
    add_dependencies(coverage ${executable})
  endif()
endmacro()

file(GLOB_RECURSE IMC_TESTS_SOURCES "${PROJECT_SOURCE_DIR}/tests/test_*.cpp")
foreach(test ${IMC_TESTS_SOURCES})
  imc_test(${test})
endforeach(test ${IMC_TESTS_SOURCES})
