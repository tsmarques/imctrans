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
#include <IMC/Base/Packet.hpp>
#include <IMC/Spec/EulerAngles.hpp>
#include <IMC/Spec/EntityList.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("serializeDeserializeInvalidCRC")
{
  uint8_t data[1024];
  IMC::EulerAngles msg;
  size_t size = IMC::Packet::serialize(&msg, data, sizeof(data));
  data[size - 1] = 0x00;
  REQUIRE_THROWS_AS(IMC::Packet::deserialize(data, size), IMC::InvalidCrc);
}

TEST_CASE("deserializeBufferTooShort")
{
  uint8_t data[1] = {0x00};
  REQUIRE_THROWS_AS(IMC::Packet::deserialize(data, sizeof(data)), IMC::BufferTooShort);
}

TEST_CASE("deserializeInvalidSync")
{
  uint8_t data[30] = {0x00};
  REQUIRE_THROWS_AS(IMC::Packet::deserialize(data, sizeof(data)), IMC::InvalidSync);
}

TEST_CASE("serializeBufferTooShort")
{
  IMC::EntityList msg;
  REQUIRE_THROWS_AS(IMC::Packet::serialize(&msg, NULL, 0), IMC::BufferTooShort);
}

TEST_CASE("serializeInvalidMessageSize")
{
  IMC::EntityList msg;
  msg.list.resize(65 * 1024);
  REQUIRE_THROWS_AS(IMC::Packet::serialize(&msg, NULL, 0), IMC::InvalidMessageSize);
}

TEST_CASE("serializeInvalidMessageSizeByteBuffer")
{
  IMC::EntityList msg;
  msg.list.resize(65 * 1024);
  IMC::ByteBuffer bfr;
  REQUIRE_THROWS_AS(IMC::Packet::serialize(&msg, bfr), IMC::InvalidMessageSize);
}

TEST_CASE("serializeHeader")
{
  uint8_t bfr[128];
  IMC::EulerAngles msg;
  REQUIRE(IMC::Packet::serializeHeader(&msg, bfr, sizeof(bfr)) == IMC_CONST_HEADER_SIZE);
}

TEST_CASE("serializeDeserializeStream")
{
  // Serialize.
  uint8_t bfr[256];
  IMC::EulerAngles msg;
  size_t rv = IMC::Packet::serialize(&msg, bfr, sizeof(bfr));

  // Deserialize.
  std::stringstream ss;
  ss.write(reinterpret_cast<const char*>(bfr), rv);
  IMC::Message* actual = IMC::Packet::deserialize(ss);
  REQUIRE(actual != NULL);
  REQUIRE(*actual == msg);
}


