#ifndef SOURCEFILES_LEETCODE_LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H_
#define SOURCEFILES_LEETCODE_LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H_

#include <string>
#include <vector>

namespace LeetCode {

class LetterCombinationsOfAPhoneNumber {
 public:
  LetterCombinationsOfAPhoneNumber() = default;
  LetterCombinationsOfAPhoneNumber(const LetterCombinationsOfAPhoneNumber &) =
      default;
  LetterCombinationsOfAPhoneNumber(LetterCombinationsOfAPhoneNumber &&) =
      default;

  auto operator=(const LetterCombinationsOfAPhoneNumber &)
      -> LetterCombinationsOfAPhoneNumber & = default;
  auto operator=(LetterCombinationsOfAPhoneNumber &&)
      -> LetterCombinationsOfAPhoneNumber & = default;

  virtual ~LetterCombinationsOfAPhoneNumber() = default;

  static auto LetterCombinations(const std::string &digits)
      -> std::vector<std::string>;
};

}  // namespace LeetCode

#endif  // SOURCEFILES_LEETCODE_LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H_
