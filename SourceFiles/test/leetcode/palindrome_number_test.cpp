#include "leetcode/palindrome_number_test.h"

namespace LeetCode::Test {

TEST_F(PalindromeNumberTest, IsPalindrome0) {
  constexpr int kInput = 0;

  auto actually = PalindromeNumber::IsPalindrome(kInput);
  EXPECT_TRUE(actually);
}

TEST_F(PalindromeNumberTest, IsPalindrome10) {
  constexpr int kInput = 10;

  auto actually = PalindromeNumber::IsPalindrome(kInput);
  EXPECT_FALSE(actually);
}

TEST_F(PalindromeNumberTest, IsPalindrome121) {
  constexpr int kInput = 121;

  auto actually = PalindromeNumber::IsPalindrome(kInput);
  EXPECT_TRUE(actually);
}

TEST_F(PalindromeNumberTest, IsPalindrome123) {
  constexpr int kInput = 123;

  auto actually = PalindromeNumber::IsPalindrome(kInput);
  EXPECT_FALSE(actually);
}

TEST_F(PalindromeNumberTest, IsPalindromeNegative121) {
  constexpr int kInput = -121;

  auto actually = PalindromeNumber::IsPalindrome(kInput);
  EXPECT_FALSE(actually);
}

TEST_F(PalindromeNumberTest, IsPalindromeNegative1001) {
  constexpr int kInput = 1001;

  auto actually = PalindromeNumber::IsPalindrome(kInput);
  EXPECT_TRUE(actually);
}

TEST_F(PalindromeNumberTest, IsPalindromeNegative1000021) {
  constexpr int kInput = 1000021;

  auto actually = PalindromeNumber::IsPalindrome(kInput);
  EXPECT_FALSE(actually);
}

TEST_F(PalindromeNumberTest, IsPalindromeNegative1000110001) {
  constexpr int kInput = 1000110001;

  auto actually = PalindromeNumber::IsPalindrome(kInput);
  EXPECT_TRUE(actually);
}

TEST_F(PalindromeNumberTest, IsPalindromeNegative1000000001) {
  constexpr int kInput = 1000000001;

  auto actually = PalindromeNumber::IsPalindrome(kInput);
  EXPECT_TRUE(actually);
}

TEST_F(PalindromeNumberTest, IsPalindromeNegative1234567899) {
  constexpr int kInput = 1234567899;

  auto actually = PalindromeNumber::IsPalindrome(kInput);
  EXPECT_FALSE(actually);
}

TEST_F(PalindromeNumberTest, IsPalindromeNegative1147557411) {
  constexpr int kInput = 1147557411;

  auto actually = PalindromeNumber::IsPalindrome(kInput);
  EXPECT_TRUE(actually);
}

}  // namespace LeetCode::Test
