Problem Name: [](https://leetcode.com/problems/remove-nodes-from-linked-list/description/)

Problem #2487

Tag: `Linked List` `Stack` `Recursion` `Monotonic Stack`

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
  ListNode* reverseList( ListNode* head ) {
    ListNode *prev = nullptr, *current = head;
    while ( current ) {
      ListNode *temp = current->next;
      current->next = prev;
      prev = current;
      current = temp;
    }

    return prev;
  }
public:
  ListNode* removeNodes(ListNode* head) {
    head = reverseList(head);

    ListNode *prev = head, *current = head->next;
    while ( current ) {
      if ( prev->val > current->val ) {
        current = current->next;
        prev->next = current;
      } else {
        current = current->next;
        prev = prev->next;
      }
    }

    return reverseList(head);
  }
};
```

<details>
  <summary>Note</summary>
  <li>compare two nodes and remove the lowest value</li>
  <li>reverse the linked list</li>
</details>
