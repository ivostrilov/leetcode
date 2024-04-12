#include "algorithm/binary_search_test.h"

#include <gtest/gtest.h>

#include <vector>

#include "algorithm/binary_search.h"

namespace Algorithm::Test {

TEST_F(BinarySearchTest, EmptyInput) {
  const std::vector<int> kInput = {};
  auto actually = BinarySearch::Search(kInput.cbegin(), kInput.cend(), 0);
  EXPECT_EQ(actually, kInput.cend());
}

TEST_F(BinarySearchTest, Arr_123456789_10_Target_4) {
  const std::vector<int> kInput = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  constexpr int kTarget = 4;
  const auto kExpected = kInput.cbegin() + 3;

  auto actually = BinarySearch::Search(kInput.cbegin(), kInput.cend(), kTarget);
  EXPECT_EQ(actually, kExpected);
}

TEST_F(BinarySearchTest, Arr_123456789_Target_8) {
  const std::vector<int> kInput = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  constexpr int kTarget = 8;
  const auto kExpected = kInput.cbegin() + 7;

  auto actually = BinarySearch::Search(kInput.cbegin(), kInput.cend(), kTarget);
  EXPECT_EQ(actually, kExpected);
}

TEST_F(BinarySearchTest, Arr_123456789_Target_15) {
  const std::vector<int> kInput = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  constexpr int kTarget = 15;
  const auto kExpected = kInput.cend();

  auto actually = BinarySearch::Search(kInput.cbegin(), kInput.cend(), kTarget);
  EXPECT_EQ(actually, kExpected);
}

TEST_F(BinarySearchTest, Arr_123456789_Target_0) {
  const std::vector<int> kInput = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  constexpr int kTarget = 0;
  const auto kExpected = kInput.cend();

  auto actually = BinarySearch::Search(kInput.cbegin(), kInput.cend(), kTarget);
  EXPECT_EQ(actually, kExpected);
}

}  // namespace Algorithm::Test
