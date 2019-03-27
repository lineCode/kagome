/**
 * Copyright Soramitsu Co., Ltd. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0
 */

#include <gtest/gtest.h>

#include "common/result.hpp"
#include "scale/basic_stream.hpp"

using namespace kagome;
using namespace kagome::common;
using namespace common::scale;

/**
 * Utility tests
 */

/**
 * @given byte array of 3 items: 0, 1, 2
 * @when create BasicStream wrapping this array and start to get bytes one by
 * one
 * @then bytes 0, 1, 2 are obtained sequencially
 */
TEST(Scale, basicStream) {
  auto bytes = ByteArray{0, 1, 2};
  auto stream = BasicStream{bytes};
  ASSERT_EQ(stream.hasMore(3), true);

  auto byte = stream.nextByte();
  ASSERT_EQ(byte.has_value(), true);
  ASSERT_EQ((*byte), 0);

  ASSERT_EQ(stream.hasMore(2), true);
  byte = stream.nextByte();
  ASSERT_EQ(byte.has_value(), true);
  ASSERT_EQ((*byte), 1);

  ASSERT_EQ(stream.hasMore(1), true);
  byte = stream.nextByte();
  ASSERT_EQ(byte.has_value(), true);
  ASSERT_EQ((*byte), 2);

  ASSERT_EQ(stream.hasMore(1), false);
}

/**
 * Decode compact integers tests
 */

// TODO(yuraz): PRE-70 implement encode and decode tuples and variants

// TODO(yuraz): PRE-70 write example of encoding and decoding custom structures

TEST(Scale, DISABLED_encodeTuple) {
  FAIL();
}

TEST(Scale, DISABLED_decodeTuple) {
  FAIL();
}

TEST(Scale, DISABLED_encodeStructureExample) {
  FAIL();
}

TEST(Scale, DISABLED_decodeStructureExample) {
  FAIL();
}

TEST(Scale, DISABLED_encodeVariant) {
  FAIL();
}

TEST(Scale, DISABLED_decodeVariant) {
  FAIL();
}
