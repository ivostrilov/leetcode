#ifndef SOURCEFILES_LEETCODE_MERGE_TWO_SORTED_LISTS_H_
#define SOURCEFILES_LEETCODE_MERGE_TWO_SORTED_LISTS_H_

#include <string>

namespace LeetCode {

class MergeTwoSortedLists final {
 public:
  MergeTwoSortedLists() = default;
  MergeTwoSortedLists(const MergeTwoSortedLists &) = default;
  MergeTwoSortedLists(MergeTwoSortedLists &&) = default;

  auto operator=(const MergeTwoSortedLists &)
      -> MergeTwoSortedLists & = default;
  auto operator=(MergeTwoSortedLists &&) -> MergeTwoSortedLists & = default;

  ~MergeTwoSortedLists() = default;

  struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    explicit ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}

    static auto PushBack(ListNode *head, int val) -> ListNode * {
      if (head == nullptr) {
        return new ListNode(val);
      }

      auto *node = head;
      while (node->next != nullptr) {
        node = node->next;
      }
      node->next = new ListNode(val);

      return head;
    }

    static void Delete(ListNode *head) {
      while (head != nullptr) {
        auto *next = head->next;
        delete head;
        head = next;
      }
    }
  };

  static auto MergeTwoLists(ListNode *list1, ListNode *list2) -> ListNode *;
};

}  // namespace LeetCode

#endif  // SOURCEFILES_LEETCODE_MERGE_TWO_SORTED_LISTS_H_
