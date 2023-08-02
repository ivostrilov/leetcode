#ifndef SOURCEFILES_LEETCODE_SUM_CLOSEST_H_
#define SOURCEFILES_LEETCODE_SUM_CLOSEST_H_

#include <vector>

namespace LeetCode {

class SumClosest {
 public:
  SumClosest() = default;
  SumClosest(const SumClosest &) = default;
  SumClosest(SumClosest &&) = default;

  auto operator=(const SumClosest &) -> SumClosest & = default;
  auto operator=(SumClosest &&) -> SumClosest & = default;

  virtual ~SumClosest() = default;

  static auto ThreeSumClosest(const std::vector<int> &nums, int target) -> int;
};

}  // namespace LeetCode

#endif  // SOURCEFILES_LEETCODE_SUM_CLOSEST_H_
