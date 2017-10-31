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
#include <IMC/Base/Serialization.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("deserializeOthers")
{
  {
    uint8_t data[] = {0x00, 0x01};
    size_t data_size = sizeof(data);
    uint16_t value = 0;
    IMC::deserialize(value, data, data_size);
#if defined(IMC_CPU_LE)
    REQUIRE(value == 0x0100);
#else
    REQUIRE(value == 0x0001);
#endif
  }

  {
    uint8_t data[] = {0x01};
    size_t data_size = sizeof(data);
    uint16_t value = 0;
    REQUIRE_THROWS(IMC::deserialize(value, data, data_size));
  }
}

TEST_CASE("serializeDeserializeDouble")
{
  // Serialize.
  double in_value = 10213123124.0;
  uint8_t bfr[8];
  uint16_t serialized_length = (uint16_t)IMC::serialize(in_value, bfr);
  REQUIRE(serialized_length == 8);

  // Deserialize.
  double out_value = 0;
  size_t deserialized_length = serialized_length;
  IMC::deserialize(out_value, bfr, deserialized_length);
  REQUIRE(deserialized_length == 0);

  // Compare.
  REQUIRE(in_value == out_value);
}

TEST_CASE("reverseDeserializeOthers")
{
  {
    uint8_t data[] = {0x00, 0x01};
    size_t data_size = sizeof(data);
    uint16_t value = 0;
    IMC::reverseDeserialize(value, data, data_size);
#if defined(IMC_CPU_LE)
    REQUIRE(value == 0x0001);
#else
    REQUIRE(value == 0x0100);
#endif
  }

  {
    uint8_t data[] = {0x01};
    size_t data_size = sizeof(data);
    uint16_t value = 0;
    REQUIRE_THROWS(IMC::reverseDeserialize(value, data, data_size));
  }
}

TEST_CASE("deserializeVector")
{
  {
    uint8_t data[] = {0x01, 0x00, 0x41};
    size_t data_size = sizeof(data);
    std::vector<char> str;
    IMC::deserialize(str, data, data_size);
    REQUIRE(str[0] == 0x41);
  }

  {
    uint8_t data[] = {0x01};
    size_t data_size = sizeof(data);
    std::vector<char> str;
    REQUIRE_THROWS(IMC::deserialize(str, data, data_size));
  }

  {
    uint8_t data[] = {0x04, 0x00, 0x41};
    size_t data_size = sizeof(data);
    std::vector<char> str;
    REQUIRE_THROWS(IMC::deserialize(str, data, data_size));
  }
}

TEST_CASE("reverseDeserializeVector")
{
  {
    uint8_t data[] = {0x00, 0x01, 0x41};
    size_t data_size = sizeof(data);
    std::vector<char> str;
    IMC::reverseDeserialize(str, data, data_size);
    REQUIRE(str[0] == 0x41);
  }

  {
    uint8_t data[] = {0x01};
    size_t data_size = sizeof(data);
    std::vector<char> str;
    REQUIRE_THROWS(IMC::reverseDeserialize(str, data, data_size));
  }

  {
    uint8_t data[] = {0x00, 0x04, 0x41};
    size_t data_size = sizeof(data);
    std::vector<char> str;
    REQUIRE_THROWS(IMC::reverseDeserialize(str, data, data_size));
  }
}

TEST_CASE("deserializeString")
{
  {
    uint8_t data[] = {0x01, 0x00, 0x41};
    size_t data_size = sizeof(data);
    std::string str;
    IMC::deserialize(str, data, data_size);
    REQUIRE(str == "A");
  }

  {
    uint8_t data[] = {0x01};
    size_t data_size = sizeof(data);
    std::string str;
    REQUIRE_THROWS(IMC::deserialize(str, data, data_size));
  }

  {
    uint8_t data[] = {0x04, 0x00, 0x41};
    size_t data_size = sizeof(data);
    std::string str;
    REQUIRE_THROWS(IMC::deserialize(str, data, data_size));
  }
}

TEST_CASE("reverseDeserializeString")
{
  {
    uint8_t data[] = {0x00, 0x01, 0x41};
    size_t data_size = sizeof(data);
    std::string str;
    IMC::reverseDeserialize(str, data, data_size);
    REQUIRE(str == "A");
  }

  {
    uint8_t data[] = {0x01};
    size_t data_size = sizeof(data);
    std::string str;
    REQUIRE_THROWS(IMC::reverseDeserialize(str, data, data_size));
  }

  {
    uint8_t data[] = {0x00, 0x04, 0x41};
    size_t data_size = sizeof(data);
    std::string str;
    REQUIRE_THROWS(IMC::reverseDeserialize(str, data, data_size));
  }
}
