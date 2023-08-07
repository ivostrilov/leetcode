#ifndef SOURCEFILES_LEETCODE_SUM_4_H_
#define SOURCEFILES_LEETCODE_SUM_4_H_

#include <vector>

namespace LeetCode {

class Sum4 {
 public:
  using IntMatrix = std::vector<std::vector<int>>;

  Sum4() = default;
  Sum4(const Sum4 &) = default;
  Sum4(Sum4 &&) = default;

  auto operator=(const Sum4 &) -> Sum4 & = default;
  auto operator=(Sum4 &&) -> Sum4 & = default;

  virtual ~Sum4() = default;

  static auto FourSum(const std::vector<int> &nums, int target) -> IntMatrix;
};

}  // namespace LeetCode

#endif  // SOURCEFILES_LEETCODE_SUM_4_H_
