Problem Name: [Merge In Between Linked Lists](https://leetcode.com/problems/merge-in-between-linked-lists/description/)

Problem #1669

Tag: `Linked List`

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
  ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode *p = nullptr, *q = nullptr, *fast = list1;
    for ( int i = 0; i < a; i++ ) {
      p = fast;
      fast = fast->next;
    }

    for ( int i = a; i < b; i++ ) {
      fast = fast->next;
    }
    q = fast->next;

    p->next = list2;
    ListNode *current = list2;
    while ( current->next != nullptr ) {
      current = current->next;
    }
    current->next = q;

    return list1;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Traverse <code>a</code> & <code>b</code> point separately</li>
  <li>Joined <code>list2</code> inside that range</li>
</details>
