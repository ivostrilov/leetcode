#include "leetcode/merge_two_sorted_lists.h"

#include <stdexcept>

namespace LeetCode {
auto MergeTwoSortedLists::MergeTwoLists(ListNode *list1, ListNode *list2)
    -> ListNode * {
  ListNode *result = nullptr;

  ListNode *l1_node = list1;
  ListNode *l2_node = list2;

  while (l1_node != nullptr && l2_node != nullptr) {
    int n1_value = l1_node->val;
    int n2_value = l2_node->val;

    if (n1_value < n2_value) {
      result = ListNode::PushBack(result, n1_value);
      l1_node = l1_node->next;
      continue;
    }

    result = ListNode::PushBack(result, n2_value);
    l2_node = l2_node->next;
  }

  while (l1_node != nullptr) {
    result = ListNode::PushBack(result, l1_node->val);
    l1_node = l1_node->next;
  }

  while (l2_node != nullptr) {
    result = ListNode::PushBack(result, l2_node->val);
    l2_node = l2_node->next;
  }

  return result;
}
}  // namespace LeetCode
