Problem Name: [Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/description/)

Problem #24

Tag: `Linked List` `Recursion`

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
  ListNode* swapPairs(ListNode* head) {
    if ( head == nullptr || head->next == nullptr ) return head;

    ListNode *prev = head, *current = head->next, *p = nullptr;
    head = current;
    while ( prev && current ) {
      ListNode *a = current->next;
      ListNode *b = a ? current->next->next : a;

      prev->next = current->next;
      current->next = prev;

      if ( p ) p->next  = current;
      p = prev;

      prev = a;
      current = b;
    }

    return head;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Return <code>head</code> if <code>head == nullptr</code> or <code>head->next == nullptr</code></li>
  <li>Take two nodes and swap with them</li>
  <li>Move to the next two nodes and make sure to establish the connection of previous nodes</li>
</details>
