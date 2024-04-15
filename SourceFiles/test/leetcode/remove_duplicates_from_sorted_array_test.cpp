#include "leetcode/remove_duplicates_from_sorted_array_test.h"

#include "leetcode/remove_duplicates_from_sorted_array.h"

namespace LeetCode::Test {

TEST_F(RemoveDuplicatesFromSortedArrayTest, A112) {
  constexpr int kExpectedReturnValue = 2;
  const std::vector<int> kExpectedArray = {1, 2};

  std::vector<int> input = {1, 1, 2};

  int actually = RemoveDuplicatesFromSortedArray::RemoveDuplicates(input);
  ASSERT_EQ(kExpectedReturnValue, actually);
  EXPECT_EQ(kExpectedArray, input);
}

TEST_F(RemoveDuplicatesFromSortedArrayTest, A1233345) {
  constexpr int kExpectedReturnValue = 5;
  const std::vector<int> kExpectedArray = {1, 2, 3, 4, 5};

  std::vector<int> input = {1, 2, 3, 3, 3, 4, 5};

  int actually = RemoveDuplicatesFromSortedArray::RemoveDuplicates(input);
  ASSERT_EQ(kExpectedReturnValue, actually);
  EXPECT_EQ(kExpectedArray, input);
}

TEST_F(RemoveDuplicatesFromSortedArrayTest, A1123) {
  constexpr int kExpectedReturnValue = 3;
  const std::vector<int> kExpectedArray = {1, 2, 3};

  std::vector<int> input = {1, 1, 2, 3};

  int actually = RemoveDuplicatesFromSortedArray::RemoveDuplicates(input);
  // ASSERT_EQ(kExpectedReturnValue, actually);
  EXPECT_EQ(kExpectedArray, input);
}

}  // namespace LeetCode::Test
