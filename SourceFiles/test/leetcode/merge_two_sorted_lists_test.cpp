#include "leetcode/merge_two_sorted_lists_test.h"

#include <vector>

#include "leetcode/merge_two_sorted_lists.h"

namespace LeetCode::Test {

TEST_F(MergeTwoSortedListsTest, MergeTwoLists_l1_1_2_4_l2_1_3_4) {
  const std::vector<int> kExpected = {1, 1, 2, 3, 4, 4};

  MergeTwoSortedLists::ListNode l1_node3(4);
  MergeTwoSortedLists::ListNode l1_node2(2, &l1_node3);
  MergeTwoSortedLists::ListNode l1_node1(1, &l1_node2);

  MergeTwoSortedLists::ListNode l2_node3(4);
  MergeTwoSortedLists::ListNode l2_node2(3, &l2_node3);
  MergeTwoSortedLists::ListNode l2_node1(1, &l2_node2);

  auto *actually = MergeTwoSortedLists::MergeTwoLists(&l1_node1, &l2_node1);

  {
    auto *node = actually;
    for (const auto it : kExpected) {
      ASSERT_TRUE(node != nullptr);
      EXPECT_EQ(node->val, it);
      node = node->next;
    }
  }

  MergeTwoSortedLists::ListNode::Delete(actually);
}

}  // namespace LeetCode::Test
