#include "leetcode/palindrome_number.h"

#include <cstdint>

namespace LeetCode {

auto PalindromeNumber::IsPalindrome(int number) -> bool {
  constexpr int kPlaceStep = 10;

  if (number < 0) {
    return false;
  }

  int64_t number_copy = number;
  int64_t reversed = 0;

  while (number_copy != 0) {
    auto digit = number_copy % kPlaceStep;

    reversed = reversed * kPlaceStep + digit;

    number_copy /= kPlaceStep;
  }

  return number == reversed;
}

}  // namespace LeetCode
