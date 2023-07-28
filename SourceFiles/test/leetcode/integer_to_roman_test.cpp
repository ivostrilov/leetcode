#include "leetcode/integer_to_roman_test.h"

namespace LeetCode::Test {

TEST_F(IntegerToRomanTest, IntToRoman1) {
  constexpr char const *kExpected = "I";
  constexpr int kNumber = 1;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(IntegerToRomanTest, IntToRoman5) {
  constexpr char const *kExpected = "V";
  constexpr int kNumber = 5;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(IntegerToRomanTest, IntToRoman10) {
  constexpr char const *kExpected = "X";
  constexpr int kNumber = 10;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(IntegerToRomanTest, IntToRoman50) {
  constexpr char const *kExpected = "L";
  constexpr int kNumber = 50;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(IntegerToRomanTest, IntToRoman100) {
  constexpr char const *kExpected = "C";
  constexpr int kNumber = 100;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(IntegerToRomanTest, IntToRoman500) {
  constexpr char const *kExpected = "D";
  constexpr int kNumber = 500;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(IntegerToRomanTest, IntToRoman1000) {
  constexpr char const *kExpected = "M";
  constexpr int kNumber = 1000;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(IntegerToRomanTest, IntToRoman4) {
  constexpr char const *kExpected = "IV";
  constexpr int kNumber = 4;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(IntegerToRomanTest, IntToRoman9) {
  constexpr char const *kExpected = "IX";
  constexpr int kNumber = 9;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(IntegerToRomanTest, IntToRoman40) {
  constexpr char const *kExpected = "XL";
  constexpr int kNumber = 40;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(IntegerToRomanTest, IntToRoman90) {
  constexpr char const *kExpected = "XC";
  constexpr int kNumber = 90;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(IntegerToRomanTest, IntToRoman400) {
  constexpr char const *kExpected = "CD";
  constexpr int kNumber = 400;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(IntegerToRomanTest, IntToRoman900) {
  constexpr char const *kExpected = "CM";
  constexpr int kNumber = 900;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(IntegerToRomanTest, IntToRoman3) {
  constexpr char const *kExpected = "III";
  constexpr int kNumber = 3;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(IntegerToRomanTest, IntToRoman30) {
  constexpr char const *kExpected = "XXX";
  constexpr int kNumber = 30;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(IntegerToRomanTest, IntToRoman58) {
  constexpr char const *kExpected = "LVIII";
  constexpr int kNumber = 58;

  auto actually = IntegerToRoman::IntToRoman(kNumber);
  EXPECT_EQ(kExpected, actually);
}

}  // namespace LeetCode::Test
