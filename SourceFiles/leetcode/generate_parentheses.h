#ifndef SOURCEFILES_LEETCODE_GENERATE_PARENTHESES_H_
#define SOURCEFILES_LEETCODE_GENERATE_PARENTHESES_H_

#include <string>
#include <vector>

namespace LeetCode {

class GenerateParentheses {
 public:
  GenerateParentheses() = default;
  GenerateParentheses(const GenerateParentheses &) = default;
  GenerateParentheses(GenerateParentheses &&) = default;

  auto operator=(const GenerateParentheses &)
      -> GenerateParentheses & = default;
  auto operator=(GenerateParentheses &&) -> GenerateParentheses & = default;

  ~GenerateParentheses() = default;

  static auto GenerateParenthesis(int n) -> std::vector<std::string>;
};

}  // namespace LeetCode

#endif  // SOURCEFILES_LEETCODE_GENERATE_PARENTHESES_H_
