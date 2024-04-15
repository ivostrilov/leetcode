#include "leetcode/generate_parentheses_test.h"

#include "leetcode/generate_parentheses.h"

namespace LeetCode::Test {

TEST_F(GenerateParenthesesTest, N1) {
  constexpr int kN = 1;
  const std::vector<std::string> kExpected = {"()"};

  auto actually = GenerateParentheses::GenerateParenthesis(kN);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(GenerateParenthesesTest, N2) {
  constexpr int kN = 2;
  const std::vector<std::string> kExpected = {"(())", "()()"};

  auto actually = GenerateParentheses::GenerateParenthesis(kN);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(GenerateParenthesesTest, N3) {
  constexpr int kN = 3;
  const std::vector<std::string> kExpected = {"((()))", "(()())", "(())()",
                                              "()(())", "()()()"};

  auto actually = GenerateParentheses::GenerateParenthesis(kN);
  EXPECT_EQ(kExpected, actually);
}

}  // namespace LeetCode::Test
