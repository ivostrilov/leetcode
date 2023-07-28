#ifndef SOURCEFILES_LEETCODE_INTEGER_TO_ROMAN_H_
#define SOURCEFILES_LEETCODE_INTEGER_TO_ROMAN_H_

#include <string>

namespace LeetCode {

class IntegerToRoman final {
 public:
  IntegerToRoman() = default;
  IntegerToRoman(const IntegerToRoman &) = default;
  IntegerToRoman(IntegerToRoman &&) = default;

  auto operator=(const IntegerToRoman &) -> IntegerToRoman & = default;
  auto operator=(IntegerToRoman &&) -> IntegerToRoman & = default;

  ~IntegerToRoman() = default;

  static auto IntToRoman(int num) -> std::string;
};

}  // namespace LeetCode

#endif  // SOURCEFILES_LEETCODE_INTEGER_TO_ROMAN_H_
