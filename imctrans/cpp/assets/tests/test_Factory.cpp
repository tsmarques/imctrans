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
#include <IMC/Base/Factory.hpp>
#include <IMC/Spec/Macros.hpp>
#include <IMC/Spec/EulerAngles.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("trivialProduce")
{
  REQUIRE(IMC::Factory::produce(1) != NULL);
  REQUIRE(IMC::Factory::produce(999999) == NULL);
  REQUIRE(IMC::Factory::produce("EulerAngles") != NULL);
  REQUIRE(IMC::Factory::getAbbrevFromId(IMC_EULERANGLES) == "EulerAngles");
  REQUIRE_THROWS_AS(IMC::Factory::getAbbrevFromId(99999999), IMC::InvalidMessageId);

  REQUIRE(IMC::Factory::getIdFromAbbrev("EulerAngles") == IMC_EULERANGLES);
  REQUIRE_THROWS_AS(IMC::Factory::getIdFromAbbrev("Invalid Abbreviation"), IMC::InvalidMessageAbbrev);

  std::vector<std::string> abbrevList;
  IMC::Factory::getAbbrevs(abbrevList);
  REQUIRE(!abbrevList.empty());

  std::vector<uint32_t> idList;
  IMC::Factory::getIds(idList);
  REQUIRE(!idList.empty());
}
