#include "leetcode/remove_nth_node_from_end_of_list.h"

#include <cassert>
#include <vector>

namespace LeetCode {

auto RemoveNthNodeFromEndOfList::RemoveNthFromEnd(ListNode *head, int number)
    -> ListNode * {
  assert(head != nullptr);

  auto *fast = head;
  auto *slow = head;

  for (int i = 0; i < number; ++i) {
    fast = fast->next;
  }

  if (fast == nullptr) {
    auto *new_head = head->next;
    delete head;
    return new_head;
  }

  while (fast->next != nullptr) {
    fast = fast->next;
    slow = slow->next;
  }

  assert(slow && slow->next);

  auto *for_deleting = slow->next;
  slow->next = slow->next->next;

  delete for_deleting;

  return head;
}

}  // namespace LeetCode
