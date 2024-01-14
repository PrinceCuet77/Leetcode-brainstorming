Problem Name: [Delete the Middle Node of a Linked List](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/)

Problem #2095

Tag: `Linked List` `Two Pointers`

Difficulty: `Medium`

## Cpp

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  ListNode* deleteMiddle(ListNode* head) {
    if ( head == nullptr || head->next == nullptr ) return nullptr;

    ListNode *prev = nullptr, *slow = head, *fast = head;
    while ( fast && fast->next ) {
      prev = slow;
      slow = slow->next;
      fast = fast->next->next;
    }

    prev->next = slow->next;

    return head;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Find the middle of the linked list using Floyd’s Tortoise & Here algorithm</li>
  <li>Delete the here node</li>
</details>
