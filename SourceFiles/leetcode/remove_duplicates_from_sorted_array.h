#ifndef SOURCEFILES_LEETCODE_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H_
#define SOURCEFILES_LEETCODE_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H_

#include <vector>

namespace LeetCode {

class RemoveDuplicatesFromSortedArray {
 public:
  RemoveDuplicatesFromSortedArray() = default;
  RemoveDuplicatesFromSortedArray(const RemoveDuplicatesFromSortedArray &) =
      default;
  RemoveDuplicatesFromSortedArray(RemoveDuplicatesFromSortedArray &&) = default;

  auto operator=(const RemoveDuplicatesFromSortedArray &)
      -> RemoveDuplicatesFromSortedArray & = default;
  auto operator=(RemoveDuplicatesFromSortedArray &&)
      -> RemoveDuplicatesFromSortedArray & = default;

  ~RemoveDuplicatesFromSortedArray() = default;

  static auto RemoveDuplicates(std::vector<int>& nums) -> int;
};

}  // namespace LeetCode

#endif  // SOURCEFILES_LEETCODE_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H_
