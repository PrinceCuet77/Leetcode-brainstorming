Problem Name: [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/)

Problem #19

Tag: `Linked List` `Two Pointer`

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
  ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *fast = head, *slow = head;
    for ( int i = 0; i < n; i++ ) {
      fast = fast->next;
    }

    if ( !fast ) return head->next;

    ListNode *prev = nullptr;
    while ( fast ) {
      prev = slow;

      fast = fast->next;
      slow = slow->next;
    }

    if ( prev ) prev->next = slow->next;
    else return nullptr;

    return head;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Traverse <code>n</code> nodes</li>
  <li>if current node is <code>nullptr</code> return <code>head->next</code></li>
  <li>Traverse current node till the end & same amount of traverse from <code>head</code></li>
  <li>Delete the nth node from the end</li>
</details>
