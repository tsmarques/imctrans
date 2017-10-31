//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// Licensed under the Apache License, Version 2.0 (the "License");          *
// you may not use this file except in compliance with the License.         *
// You may obtain a copy of the License at                                  *
//                                                                          *
// http://www.apache.org/licenses/LICENSE-2.0                               *
//                                                                          *
// Unless required by applicable law or agreed to in writing, software      *
// distributed under the License is distributed on an "AS IS" BASIS,        *
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
// See the License for the specific language governing permissions and      *
// limitations under the License.                                           *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// IMC headers.
#include <IMC/Base/Parser.hpp>
#include <IMC/Spec/EulerAngles.hpp>
#include <IMC/Spec/EstimatedState.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("parseInvalid")
{
  IMC::Parser parser;
  REQUIRE(parser.parse(0x54) == NULL);
  REQUIRE(parser.parse(0xff) == NULL);
}

TEST_CASE("parseValid")
{
  uint8_t data[1024];
  IMC::EulerAngles msg;
  size_t size = IMC::Packet::serialize(&msg, data, sizeof(data));

  IMC::Parser parser;
  for (size_t i = 0; i < size - 1; ++i)
    REQUIRE(parser.parse(data[i]) == NULL);
  REQUIRE(parser.parse(data[size - 1]) != NULL);
}

TEST_CASE("parseResyncEnd")
{
  uint8_t data[1024];
  IMC::EulerAngles msg;
  size_t size = IMC::Packet::serialize(&msg, data, sizeof(data));
  size_t size2 = IMC::Packet::serialize(&msg, &data[size - 2], sizeof(data) - size);

  IMC::Parser parser;
  for (size_t i = 0; i < size + size2 - 3; ++i)
    REQUIRE(parser.parse(data[i]) == NULL);
  REQUIRE(parser.parse(data[size + size2 - 3]) != NULL);
}
