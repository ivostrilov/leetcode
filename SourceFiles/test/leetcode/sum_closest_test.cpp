#include "leetcode/sum_closest_test.h"

namespace LeetCode::Test {

// N - is negative
// ThreeSumClosestN121N4: -1, 2, 1, -4

TEST_F(SumClosestTest, ThreeSumClosestN121N4Target1) {
  const std::vector<int> kInputNumbers = {-1, 2, 1, -4};
  constexpr int kTarget = 1;
  constexpr int kExpected = 2;

  auto actually = SumClosest::ThreeSumClosest(kInputNumbers, kTarget);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(SumClosestTest, ThreeSumClosest000Target1) {
  const std::vector<int> kInputNumbers = {0, 0, 0};
  constexpr int kTarget = 1;
  constexpr int kExpected = 0;

  auto actually = SumClosest::ThreeSumClosest(kInputNumbers, kTarget);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(SumClosestTest, ThreeSumClosest11N1Target0) {
  const std::vector<int> kInputNumbers = {1, 1, -1};
  constexpr int kTarget = 0;
  constexpr int kExpected = 1;

  auto actually = SumClosest::ThreeSumClosest(kInputNumbers, kTarget);
  EXPECT_EQ(kExpected, actually);
}

TEST_F(SumClosestTest, ThreeSumClosestN100N98N2N1TargetN101) {
  const std::vector<int> kInputNumbers = {-100, -98, -2, -1};
  constexpr int kTarget = -101;
  constexpr int kExpected = -101;

  auto actually = SumClosest::ThreeSumClosest(kInputNumbers, kTarget);
  EXPECT_EQ(kExpected, actually);
}

}  // namespace LeetCode::Test
