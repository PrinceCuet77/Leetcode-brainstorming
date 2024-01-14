Problem Name: [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/description/)

Problem #21

Tag: `Linked List` `Recursion`

Difficulty: `Easy`

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
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode *head = new ListNode(-1);
    ListNode *tail = head;

    while ( list1 && list2 ) {
      if ( list1->val <= list2->val ) {
        tail->next = list1;
        tail = list1;
        list1 = list1->next;
      } else {
        tail->next = list2;
        tail = list2;
        list2 = list2->next;
      }

      tail->next = nullptr;
    }

    tail->next = list1 ? list1 : list2;

    return head->next;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Create a <code>head</code> node containing <code>-1</code></li>
  <li>Create another <code>tail</code> node pointing <code>head</code> node</li>
  <li>Compare the value of two nodes, small value nodes pointing to <code>tail</code> node and move that small value nodes forward</li>
  <li>Continue till finding <code>nullptr</code> to any linked list</li>
  <li>Link <code>tail</code> to rest of the linked list</li>
</details>