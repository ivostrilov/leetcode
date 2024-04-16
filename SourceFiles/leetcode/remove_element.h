#ifndef SOURCEFILES_LEETCODE_REMOVE_ELEMENT_H_
#define SOURCEFILES_LEETCODE_REMOVE_ELEMENT_H_

#include <vector>

namespace LeetCode {

class RemoveElement {
 public:
  RemoveElement() = default;
  RemoveElement(const RemoveElement &) = default;
  RemoveElement(RemoveElement &&) = default;

  auto operator=(const RemoveElement &) -> RemoveElement & = default;
  auto operator=(RemoveElement &&) -> RemoveElement & = default;

  ~RemoveElement() = default;

  static auto DoRemoveElement(std::vector<int> &nums, int val) -> int;
};

}  // namespace LeetCode

#endif  // SOURCEFILES_LEETCODE_REMOVE_ELEMENT_H_
