#include "leetcode/valid_parentheses_test.h"

namespace LeetCode::Test {

TEST_F(ValidParenthesesTest, IsValidEmptyString) {
  bool actually = ValidParentheses::IsValid("");
  EXPECT_TRUE(actually);
}

TEST_F(ValidParenthesesTest, IsValidPairOfRound) {
  constexpr char const *kString = "()";

  bool actually = ValidParentheses::IsValid(kString);
  EXPECT_TRUE(actually);
}

TEST_F(ValidParenthesesTest, IsValidPairsOfAll) {
  constexpr char const *kString = "()[]{}";

  bool actually = ValidParentheses::IsValid(kString);
  EXPECT_TRUE(actually);
}

TEST_F(ValidParenthesesTest, IsValidPairOfRoundAndSquare) {
  constexpr char const *kString = "(]";

  bool actually = ValidParentheses::IsValid(kString);
  EXPECT_FALSE(actually);
}

}  // namespace LeetCode::Test
