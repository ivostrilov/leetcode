#include "leetcode/remove_nth_node_from_end_of_list_test.h"

namespace LeetCode::Test {

TEST_F(RemoveNthNodeFromEndOfListTest, RemoveNthFromEndBaseTest) {
  const std::vector<int> kInput = {1, 2, 3, 4, 5};
  constexpr int kNumber = 2;

  const std::vector<int> kExpected = {1, 2, 3, 5};

  auto *head = CreateNodes(kInput);
  head = RemoveNthNodeFromEndOfList::RemoveNthFromEnd(head, kNumber);
  CompareNodes(head, kExpected);
  ClearNodes(head);
}

TEST_F(RemoveNthNodeFromEndOfListTest, RemoveNthFromEnd1Node) {
  const std::vector<int> kInput = {1};
  constexpr int kNumber = 1;

  auto *head = CreateNodes(kInput);
  head = RemoveNthNodeFromEndOfList::RemoveNthFromEnd(head, kNumber);
  EXPECT_TRUE(head == nullptr);
}

TEST_F(RemoveNthNodeFromEndOfListTest, RemoveNthFromEnd2Node) {
  const std::vector<int> kInput = {1, 2};
  constexpr int kNumber = 1;

  const std::vector<int> kExpected = {1};

  auto *head = CreateNodes(kInput);
  head = RemoveNthNodeFromEndOfList::RemoveNthFromEnd(head, kNumber);
  CompareNodes(head, kExpected);
  ClearNodes(head);
}

}  // namespace LeetCode::Test
