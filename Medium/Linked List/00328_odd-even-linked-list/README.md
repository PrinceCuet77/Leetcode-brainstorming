Problem Name: [Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/)

Problem #328

Tag: `Array`

Difficulty: `Easy`

## Cpp

```cpp
// Other Option
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
  ListNode* oddEvenList(ListNode* head) {
    if ( head == nullptr || head->next == nullptr ) return head;

    ListNode *prev = head, *current = head->next, *even = head->next;
    while ( prev && current ) {
      prev->next = current->next;
      current->next = current->next ? current->next->next : nullptr;

      prev = prev->next;
      current = current->next;
    }

    if ( prev ) prev->next = even;
    else {
      prev = head;
      while ( prev->next ) prev = prev->next;
      prev->next = even;
    }

    return head;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Return <code>head</code> if <code>head == nullptr</code> or <code>head→next == nullptr</code></li>
  <li>Take two nodes and connect them with the next two nodes like the question</li>
  <li>If the total length of nodes is odd then connect the last node to the first even node</li>
  <li>Else traverse to the last odd nodes and connect the last node to the first even node</li>
</details>
