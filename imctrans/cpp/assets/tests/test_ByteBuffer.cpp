//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <IMC/Base/ByteBuffer.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using IMC::ByteBuffer;

template <typename T>
std::vector<T>
createData(size_t size)
{
  std::vector<T> data;

  for (size_t i = 0; i < size; ++i)
  {
    T b = (T)i;
    data.push_back(b);
  }

  return data;
}

TEST_CASE("getCapacity")
{
  {
    ByteBuffer bfr(1);
    REQUIRE(bfr.getCapacity() == 1);
  }

  {
    ByteBuffer bfr(3);
    REQUIRE(bfr.getCapacity() == 4);
  }

  {
    ByteBuffer bfr(5);
    REQUIRE(bfr.getCapacity() == 8);
  }

  {
    ByteBuffer bfr(10);
    REQUIRE(bfr.getCapacity() == 16);
  }
}

TEST_CASE("appendSigned")
{
  ByteBuffer bfr;

  // Insert.
  std::vector<char> in = createData<char>(1025);
  bfr.appendSigned(&in[0], 1000);
  bfr.appendSigned(&in[1000], 25);
  REQUIRE(bfr.getSize() == 1025);

  // Retrieve and compare.
  std::vector<char> out(bfr.getBufferSigned(), bfr.getBufferSigned() + bfr.getSize());
  REQUIRE(in == out);
}

TEST_CASE("outputStream")
{
  ByteBuffer bfr;

  // Insert.
  std::vector<char> in = createData<char>(1025);
  bfr.appendSigned(&in[0], in.size());
  REQUIRE(bfr.getSize() == 1025);

  // Retrieve and compare.
  std::ostringstream ss;
  ss << bfr;
  std::string out_str = ss.str();
  std::vector<char> out(out_str.begin(), out_str.end());
  REQUIRE(in == out);
}
