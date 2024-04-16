#include "leetcode/remove_element.h"

namespace LeetCode {

auto RemoveElement::DoRemoveElement(std::vector<int> &nums, int val) -> int {
  size_t write_index = 0;

  for (size_t i = 0; i < nums.size(); ++i) {
    int current_value = nums[i];

    if (current_value == val) {
      continue;
    }

    if (write_index != i) {
      nums[write_index] = current_value;
    }

    write_index += 1;
  }

  nums.resize(write_index);
  return write_index;
}

}  // namespace LeetCode
