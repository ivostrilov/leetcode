#ifndef SOURCEFILES_TEST_LEETCODE_REMOVE_NTH_NODE_FROM_END_OF_LIST_TEST_H_
#define SOURCEFILES_TEST_LEETCODE_REMOVE_NTH_NODE_FROM_END_OF_LIST_TEST_H_

#include <gtest/gtest.h>

#include <vector>

#include "leetcode/remove_nth_node_from_end_of_list.h"

namespace LeetCode::Test {

class RemoveNthNodeFromEndOfListTest : public ::testing::Test {
 public:
  using ListNode = RemoveNthNodeFromEndOfList::ListNode;

  static auto AddNode(ListNode *node, int value) -> ListNode * {
    auto *new_node = new ListNode(value);
    if (node != nullptr) {
      node->next = new_node;
    }
    return new_node;
  }

  static auto CreateNodes(const std::vector<int> &vector) -> ListNode * {
    if (vector.empty()) {
      return nullptr;
    }

    auto *head = AddNode(nullptr, vector[0]);
    auto *last = head;

    for (int i = 1; i < vector.size(); ++i) {
      auto value = vector[i];
      last = AddNode(last, value);
    }

    return head;
  }

  static void ClearNodes(ListNode *head) {
    auto *current = head;
    while (current != nullptr) {
      auto *next = current->next;
      delete current;
      current = next;
    }
  }

  static void CompareNodes(ListNode *head, const std::vector<int> &expected) {
    if (expected.empty()) {
      EXPECT_TRUE(head == nullptr);
      return;
    }

    auto *current = head;
    for (auto value : expected) {
      ASSERT_TRUE(current != nullptr);
      EXPECT_EQ(value, current->val);
      current = current->next;
    }
  }
};

}  // namespace LeetCode::Test

#endif  // SOURCEFILES_TEST_LEETCODE_REMOVE_NTH_NODE_FROM_END_OF_LIST_TEST_H_
