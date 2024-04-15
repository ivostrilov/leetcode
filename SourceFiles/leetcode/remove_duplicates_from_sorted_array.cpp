#include "leetcode/remove_duplicates_from_sorted_array.h"

namespace LeetCode {

auto RemoveDuplicatesFromSortedArray::RemoveDuplicates(std::vector<int> &nums)
    -> int {
  if (nums.size() < 2) {
    return nums.size();
  }

  int last_unique_value = nums.front();
  size_t write_index = 1;

  for (size_t i = 1; i < nums.size(); ++i) {
    int current_value = nums[i];

    if (current_value == last_unique_value) {
      continue;
    }

    last_unique_value = current_value;
    nums[write_index++] = last_unique_value;
  }

  nums.resize(write_index);

  return nums.size();
}

}  // namespace LeetCode
