Problem Name: [Swapping Nodes in a Linked List](https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/)

Problem #1721

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
  ListNode* swapNodes(ListNode* head, int k) {
    ListNode *p = nullptr, *q = nullptr, *fast = head, *slow = head;
    for ( int i = 0; i < k; i++ ) {
      p = fast;
      fast = fast->next;
    }

    while ( fast ) {
      fast = fast->next;
      slow = slow->next;
    }

    // int temp = p->val;
    // p->val = slow->val;
    // slow->val = temp;

    swap(p->val, slow->val);

    return head;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Find the beginning & ending of <code>kth</code> node</li>
  <li>Swap with them</li>
</details>
