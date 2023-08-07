#ifndef SOURCEFILES_LEETCODE_REMOVE_NTH_NODE_FROM_END_OF_LIST_H_
#define SOURCEFILES_LEETCODE_REMOVE_NTH_NODE_FROM_END_OF_LIST_H_

namespace LeetCode {

class RemoveNthNodeFromEndOfList {
 public:
  // From LeetCode
  struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    explicit ListNode(int value) : val(value), next(nullptr) {}
  };

  RemoveNthNodeFromEndOfList() = default;
  RemoveNthNodeFromEndOfList(const RemoveNthNodeFromEndOfList &) = default;
  RemoveNthNodeFromEndOfList(RemoveNthNodeFromEndOfList &&) = default;

  auto operator=(const RemoveNthNodeFromEndOfList &)
      -> RemoveNthNodeFromEndOfList & = default;
  auto operator=(RemoveNthNodeFromEndOfList &&)
      -> RemoveNthNodeFromEndOfList & = default;

  virtual ~RemoveNthNodeFromEndOfList() = default;

  static auto RemoveNthFromEnd(ListNode *head, int number) -> ListNode *;
};

}  // namespace LeetCode

#endif  // SOURCEFILES_LEETCODE_REMOVE_NTH_NODE_FROM_END_OF_LIST_H_
