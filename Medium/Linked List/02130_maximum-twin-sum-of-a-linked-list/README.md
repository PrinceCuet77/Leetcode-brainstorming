Problem Name: [Maximum Twin Sum of a Linked List](https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/)

Problem #2130

Tag: `Linked List` `Two Pointers` `Stack`

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
  int pairSum(ListNode* head) {
    ListNode *lead = nullptr, *present = head;
    for ( ListNode* current = head; current != nullptr; current = current->next->next ) {
      if ( lead ) {
        ListNode *temp = present->next;
        present->next = lead;
        lead = present;
        present = temp;
      } else {
        lead = present;
        present = present->next;
      }
    }

    int twinSum = 0;
    ListNode *p = lead;
    while ( present ) {
      twinSum = max(twinSum, present->val + p->val);

      present = present->next;
      p = p->next;
    }

    return twinSum;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Find the middle node using <code>tortoise rabbit method</code></li>
  <li>Reverse from middle to <code>head</code> node while finding middle node</li>
  <li>Compare reversed & rest linked list and mind the maximum twin sum</li>
</details>
