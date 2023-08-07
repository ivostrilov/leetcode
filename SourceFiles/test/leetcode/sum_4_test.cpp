#include "leetcode/sum_4_test.h"

namespace LeetCode::Test {

// N - 'negative', N9 = -9
// D - 'delimiter', 10D9DN2 = { 10, 9, -2 }
// T - 'target', 9D8T10 = {9, 8}, target 10

TEST_F(Sum4Test, FourSum1D0DN1D0DN2D2T0) {
  const std::vector<int> kInput = {1, 0, -1, 0, -2, 2};
  constexpr int kTarget = 0;
  const Sum4::IntMatrix kExpected = {
      {-2, -1, 1, 2}, {-2, 0, 0, 2}, {-1, 0, 0, 1}};

  auto actually = Sum4::FourSum(kInput, kTarget);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(Sum4Test, FourSum2D2D2D2D2T8) {
  const std::vector<int> kInput = {2, 2, 2, 2, 2};
  constexpr int kTarget = 8;
  const Sum4::IntMatrix kExpected = {{2, 2, 2, 2}};

  auto actually = Sum4::FourSum(kInput, kTarget);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(Sum4Test, FourSum0T0) {
  const std::vector<int> kInput = {0};
  constexpr int kTarget = 0;
  const Sum4::IntMatrix kExpected = {};

  auto actually = Sum4::FourSum(kInput, kTarget);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(Sum4Test, FourSum1000000000D1000000000D1000000000D1000000000T0) {
  const std::vector<int> kInput = {1000000000, 1000000000, 1000000000,
                                   1000000000};
  constexpr int kTarget = 0;
  const Sum4::IntMatrix kExpected = {};

  auto actually = Sum4::FourSum(kInput, kTarget);
  EXPECT_EQ(kExpected, actually);
}

}  // namespace LeetCode::Test
