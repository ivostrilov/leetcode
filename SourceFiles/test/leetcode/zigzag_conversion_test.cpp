#include "leetcode/zigzag_conversion_test.h"

namespace LeetCode::Test {

TEST_F(ZigzagConversionTest, Conver1Rows) {
  constexpr char const *kString = "AB";
  constexpr char const *kExpected = "AB";
  constexpr int kRowsAmount = 1;

  auto actually = ZigzagConversion::Convert(kString, kRowsAmount);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(ZigzagConversionTest, Convert3Rows) {
  constexpr char const *kString = "PAYPALISHIRING";
  constexpr char const *kExpected = "PAHNAPLSIIGYIR";
  constexpr int kRowsAmount = 3;

  auto actually = ZigzagConversion::Convert(kString, kRowsAmount);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(ZigzagConversionTest, Convert4Rows) {
  constexpr char const *kString = "PAYPALISHIRING";
  constexpr char const *kExpected = "PINALSIGYAHRPI";
  constexpr int kRowsAmount = 4;

  auto actually = ZigzagConversion::Convert(kString, kRowsAmount);
  EXPECT_EQ(kExpected, actually);
}

}  // namespace LeetCode::Test
