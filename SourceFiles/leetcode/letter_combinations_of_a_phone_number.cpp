#include "leetcode/letter_combinations_of_a_phone_number.h"

#include <array>
#include <cassert>
#include <utility>

namespace LeetCode {

auto LetterCombinationsOfAPhoneNumber::LetterCombinations(
    const std::string &digits) -> std::vector<std::string> {
  constexpr int kASCIINumberToInt = 48;

  constexpr int kMaxSize = 4;
  constexpr int kMaxDigit = 9;
  constexpr int kMinDigit = 2;

  constexpr int kLettersAmountIn234568 = 3;
  constexpr int kLettersAmountIn79 = 4;

  // Avoid magic numbers for clang-tidy :)
  constexpr int kDigit7 = 7;
  constexpr int kDigit9 = 9;

  assert(digits.size() <= kMaxSize);

  if (digits.empty()) {
    return {};
  }

  // Letters from phone number 2 to 9
  const std::vector<const char *> kLetters = {"abc", "def",  "ghi", "jkl",
                                              "mno", "pqrs", "tuv", "wxyz"};

  if (digits.size() == 1) {
    auto digit = digits[0] - kASCIINumberToInt;
    assert(digit >= kMinDigit && digit <= kMaxDigit);

    const auto *letters = kLetters[digit - kMinDigit];

    if (digit == kDigit7 || digit == kDigit9) {
      return {{letters[0]}, {letters[1]}, {letters[2]}, {letters[3]}};
    }

    return {{letters[0]}, {letters[1]}, {letters[2]}};
  }

  auto combinations = LetterCombinations({digits.cbegin() + 1, digits.cend()});

  auto digit = digits[0] - kASCIINumberToInt;
  assert(digit >= kMinDigit && digit <= kMaxDigit);

  const auto *letters = kLetters[digit - kMinDigit];

  int letters_size = (digit == kDigit7 || digit == kDigit9)
                         ? kLettersAmountIn79
                         : kLettersAmountIn234568;

  std::vector<std::string> final_combinations;
  final_combinations.reserve(combinations.size() * letters_size);

  for (int i = 0; i < letters_size; ++i) {
    for (const auto &comb : combinations) {
      std::string new_comb;
      new_comb.reserve(kLetters.size());

      new_comb += letters[i];
      new_comb += comb;

      final_combinations.emplace_back(std::move(new_comb));
    }
  }

  return final_combinations;
}

}  // namespace LeetCode
