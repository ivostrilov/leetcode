#include "leetcode/valid_parentheses.h"

#include <stack>

namespace LeetCode {

auto ValidParentheses::IsValid(const std::string &string) -> bool {
  constexpr char kRoundOpen = '(';
  constexpr char kRoundClose = ')';
  constexpr char kSquareOpen = '[';
  constexpr char kSquareClose = ']';
  constexpr char kBraceOpen = '{';
  constexpr char kBraceClose = '}';

  auto is_open = [](char symbol) {
    return symbol == kRoundOpen || symbol == kSquareOpen ||
           symbol == kBraceOpen;
  };

  auto is_match = [](char open, char close) {
    return (open == kRoundOpen && close == kRoundClose) ||
           (open == kSquareOpen && close == kSquareClose) ||
           (open == kBraceOpen && close == kBraceClose);
  };

  std::stack<char> open_stack;

  for (auto symbol : string) {
    if (is_open(symbol)) {
      open_stack.push(symbol);
      continue;
    }

    if (open_stack.empty()) {
      return false;
    }

    auto last_open = open_stack.top();
    if (!is_match(last_open, symbol)) {
      return false;
    }

    open_stack.pop();
  }

  return open_stack.empty();
}

}  // namespace LeetCode
