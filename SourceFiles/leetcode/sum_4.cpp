#include "leetcode/sum_4.h"

#include <algorithm>
#include <cassert>
#include <unordered_set>
#include <utility>

namespace LeetCode {

auto Sum4::FourSum(const std::vector<int> &nums, int target) -> IntMatrix {
  constexpr int kMaxSize = 200;
  constexpr int kMinSize = 1;

  assert(nums.size() >= kMinSize && nums.size() <= kMaxSize);

  if (nums.size() < 4) {
    return {};
  }

  IntMatrix result_matrix;
  result_matrix.reserve(nums.size() > 4 ? nums.size() / 4 : nums.size());

  std::vector<int> sorted = nums;
  std::sort(sorted.begin(), sorted.end());

  int last_first = -1;
  int last_second = -1;

  for (int i = 0; i < sorted.size() - 3; ++i) {
    int first = sorted[i];

    if (i != 0 && first == last_first) {
      continue;
    }

    last_first = first;

    for (int j = i + 1; j < sorted.size() - 2; ++j) {
      int second = sorted[j];

      if (j != i + 1 && second == last_second) {
        continue;
      }

      last_second = second;

      int third_index = j + 1;
      int fourth_index = static_cast<int>(sorted.size()) - 1;

      while (third_index < fourth_index) {
        int third = sorted[third_index];
        int fourth = sorted[fourth_index];

        int64_t sum = static_cast<int64_t>(first) + second + third + fourth;

        if (sum == target) {
          std::vector<int> row = {first, second, third, fourth};
          result_matrix.emplace_back(std::move(row));
        }

        if (sum < target) {
          auto found =
              std::find_if(sorted.cbegin() + third_index, sorted.cend(),
                           [third](int value) { return value != third; });
          third_index = static_cast<int>(found - sorted.cbegin());
          continue;
        }

        auto found =
            std::find_if(sorted.rend() - fourth_index - 1, sorted.rend(),
                         [fourth](int value) { return value != fourth; });
        fourth_index = static_cast<int>(sorted.rend() - found - 1);
      }
    }
  }

  return result_matrix;
}

}  // namespace LeetCode
