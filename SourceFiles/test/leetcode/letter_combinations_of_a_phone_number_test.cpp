#include "leetcode/letter_combinations_of_a_phone_number_test.h"

namespace LeetCode::Test {

TEST_F(LetterCombinationsOfAPhoneNumberTest,
       LetterCombinationsOfAPhoneNumber23) {
  constexpr char const *kInput = "23";
  const std::vector<std::string> kExpected = {"ad", "ae", "af", "bd", "be",
                                              "bf", "cd", "ce", "cf"};

  auto actually = LetterCombinationsOfAPhoneNumber::LetterCombinations(kInput);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(LetterCombinationsOfAPhoneNumberTest,
       LetterCombinationsOfAPhoneNumber7) {
  constexpr char const *kInput = "7";
  const std::vector<std::string> kExpected = {"p", "q", "r", "s"};

  auto actually = LetterCombinationsOfAPhoneNumber::LetterCombinations(kInput);
  EXPECT_EQ(kExpected, actually);
}

}  // namespace LeetCode::Test
