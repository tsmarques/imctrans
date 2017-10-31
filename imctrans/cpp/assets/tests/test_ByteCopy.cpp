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
#include <IMC/Base/ByteCopy.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

bool
reverseCompare(void *a, void *b, size_t size)
{
  uint8_t *pa = (uint8_t *) a;
  uint8_t *pb = (uint8_t *) b;

  for (size_t i = 0; i < size; ++i)
    {
      if (pa[i] != pb[size - 1 - i])
        return false;
    }

  return true;
}

TEST_CASE("rcopy(uint8_t)")
{
  uint8_t src[] = {0xf1};
  uint8_t dst = 0x00;
  IMC::ByteCopy::rcopy(dst, src);
  REQUIRE(reverseCompare(&dst, src, sizeof(src)));
}

TEST_CASE("rcopy(int16_t)")
{
  uint8_t src[] = {0xAA, 0xBB};
  int16_t dst = 0x00;
  IMC::ByteCopy::rcopy(dst, src);
  REQUIRE(reverseCompare(&dst, src, sizeof(src)));
}

TEST_CASE("rcopy(uint16_t)")
{
  uint8_t src[] = {0xAA, 0xBB};
  uint16_t dst = 0x00;
  IMC::ByteCopy::rcopy(dst, src);
  REQUIRE(reverseCompare(&dst, src, sizeof(src)));
}

TEST_CASE("rcopy(int32_t)")
{
  uint8_t src[] = {0xAA, 0xBB, 0xCC, 0xDD};
  int32_t dst = 0x00;
  IMC::ByteCopy::rcopy(dst, src);
  REQUIRE(reverseCompare(&dst, src, sizeof(src)));
}

TEST_CASE("rcopy(uint32_t)")
{
  uint8_t src[] = {0xAA, 0xBB, 0xCC, 0xDD};
  uint32_t dst = 0x00;
  IMC::ByteCopy::rcopy(dst, src);
  REQUIRE(reverseCompare(&dst, src, sizeof(src)));
}

TEST_CASE("rcopy(int64_t)")
{
  uint8_t src[] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07};
  int64_t dst = 0x00;
  IMC::ByteCopy::rcopy(dst, src);
  REQUIRE(reverseCompare(&dst, src, sizeof(src)));
}

TEST_CASE("rcopy(float)")
{
  uint8_t src[] = {0xAA, 0xBB, 0xCC, 0xDD};
  float dst = 0x00;
  IMC::ByteCopy::rcopy(dst, src);
  REQUIRE(reverseCompare(&dst, src, sizeof(src)));
}

TEST_CASE("rcopy(double)")
{
  uint8_t src[] = {0xAA, 0xBB, 0xCC, 0xDD, 0x00, 0x00, 0x00, 0x00};
  double dst = 0x00;
  IMC::ByteCopy::rcopy(dst, src);
  REQUIRE(reverseCompare(&dst, src, sizeof(src)));
}

