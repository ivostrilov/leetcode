#ifndef SOURCEFILES_LEETCODE_PALINDROME_NUMBER_H_
#define SOURCEFILES_LEETCODE_PALINDROME_NUMBER_H_

namespace LeetCode {

class PalindromeNumber {
 public:
  PalindromeNumber() = default;
  PalindromeNumber(const PalindromeNumber &) = default;
  PalindromeNumber(PalindromeNumber &&) = default;

  auto operator=(const PalindromeNumber &) -> PalindromeNumber & = default;
  auto operator=(PalindromeNumber &&) -> PalindromeNumber & = default;

  virtual ~PalindromeNumber() = default;

  static auto IsPalindrome(int number) -> bool;
};

}  // namespace LeetCode

#endif  // SOURCEFILES_LEETCODE_PALINDROME_NUMBER_H_
