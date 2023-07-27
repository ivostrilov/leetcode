#ifndef SOURCEFILES_LEETCODE_VALID_PARENTHESES_H_
#define SOURCEFILES_LEETCODE_VALID_PARENTHESES_H_

#include <string>

namespace LeetCode {
class ValidParentheses final {
 public:
  ValidParentheses() = default;
  ValidParentheses(const ValidParentheses &) = default;
  ValidParentheses(ValidParentheses &&) = default;

  auto operator=(const ValidParentheses &) -> ValidParentheses & = default;
  auto operator=(ValidParentheses &&) -> ValidParentheses & = default;

  ~ValidParentheses() = default;

  static auto IsValid(const std::string &string) -> bool;
};

}  // namespace LeetCode

#endif  // SOURCEFILES_LEETCODE_VALID_PARENTHESES_H_
