#include "leetcode/sum_closest.h"

#include <algorithm>
#include <cstdlib>

namespace LeetCode {

auto SumClosest::ThreeSumClosest(const std::vector<int> &nums, int target)
    -> int {
  constexpr int kMinSize = 3;
  constexpr int kMaxSize = 500;

  assert(nums.size() >= kMinSize && nums.size() <= kMaxSize);

  auto get_range_to_target = [target](int number) {
    return std::abs(target - number);
  };

  auto sorted = nums;
  std::sort(sorted.begin(), sorted.end());

  auto closed_sum = sorted[0] + sorted[1] + sorted[2];
  auto closed_range = get_range_to_target(closed_sum);

  for (int i = 0; i < sorted.size(); ++i) {
    auto start = i + 1;
    auto end = static_cast<int>(sorted.size()) - 1;

    while (start < end) {
      auto sum = sorted[i] + sorted[start] + sorted[end];
      auto range = get_range_to_target(sum);

      if (range < closed_range) {
        closed_sum = sum;
        closed_range = range;
      }

      sum < target ? ++start : --end;
    }
  }

  return closed_sum;
}

}  // namespace LeetCode
