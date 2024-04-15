#include "leetcode/generate_parentheses.h"

namespace {
void Count(std::vector<std::string>& ans, std::string &temp, int n, int l,
           int r) {
  if (l == n && r == n) {
    ans.push_back(temp);
    return;
  }
  if (l < n) {
    temp.push_back('(');
    Count(ans, temp, n, l + 1, r);
    temp.pop_back();
  }
  if (r < l) {
    temp.push_back(')');
    Count(ans, temp, n, l, r + 1);
    temp.pop_back();
  }
}
}  // namespace

namespace LeetCode {

auto GenerateParentheses::GenerateParenthesis(int n)
    -> std::vector<std::string> {
  int l = 0;
  int r = 0;
  std::vector<std::string> result;
  std::string temp;

  Count(result, temp, n, l, r);

  return result;
}

}  // namespace LeetCode
