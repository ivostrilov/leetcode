#include "leetcode/remove_element_test.h"

#include "leetcode/remove_element.h"

namespace LeetCode::Test {

TEST_F(RemoveElementTest, A3223_T3) {
  constexpr int kTarget = 3;
  constexpr int kExpected = 2;
  const std::vector<int> kExpectedArray = {2, 2};
  std::vector<int> input = {3, 2, 2, 3};

  int actually = RemoveElement::DoRemoveElement(input, kTarget);
  EXPECT_EQ(kExpected, actually);
  EXPECT_EQ(kExpectedArray, input);
}

TEST_F(RemoveElementTest, A1_T1) {
  constexpr int kTarget = 1;
  constexpr int kExpected = 0;
  const std::vector<int> kExpectedArray = {};
  std::vector<int> input = {1};

  int actually = RemoveElement::DoRemoveElement(input, kTarget);
  EXPECT_EQ(kExpected, actually);
  EXPECT_EQ(kExpectedArray, input);
}

}  // namespace LeetCode::Test
