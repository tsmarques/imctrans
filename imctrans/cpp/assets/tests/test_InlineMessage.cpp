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
#include <IMC/Base/InlineMessage.hpp>
#include <IMC/Spec/EulerAngles.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("opsOnNull")
{
  IMC::InlineMessage<IMC::EulerAngles> imsg;
  REQUIRE_THROWS_AS(imsg.get(), std::runtime_error);
  REQUIRE(imsg.getSerializationSize() == 2);
}

TEST_CASE("serializeNull")
{
  uint8_t bfr[128];
  IMC::InlineMessage<IMC::EulerAngles> imsg;
  REQUIRE(imsg.serialize(bfr) == 2);
}

TEST_CASE("equalOperatorBothNull")
{
  IMC::InlineMessage<IMC::EulerAngles> a;
  IMC::InlineMessage<IMC::EulerAngles> b;
  REQUIRE(a == b);
}

TEST_CASE("equalOperatorOneNull")
{
  IMC::EulerAngles msg;
  IMC::InlineMessage<IMC::EulerAngles> a;
  a.set(msg);
  IMC::InlineMessage<IMC::EulerAngles> b;
  REQUIRE(a != b);
}

