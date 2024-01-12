Problem Name: [Add Two Numbers II](https://leetcode.com/problems/add-two-numbers-ii/description/)

Problem #445

Tag: `Linked List` `Math` `Stack`

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
  ListNode* reverse(ListNode *head, int &len) {
    ListNode *p = nullptr, *q = head;
    while ( q ) {
      ListNode *temp = q->next;
      q->next = p;
      p = q;

      q = temp;
      len++;
    }

    return p;
  }

public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int len1 = 0, len2 = 0;
    ListNode *lead1 = reverse(l1, len1);
    ListNode *lead2 = reverse(l2, len2);

    ListNode *p = lead1, *q = lead2, *top = lead1, *prev = nullptr;
    if ( len1 < len2 ) {
      p = lead2;
      q = lead1;
      top = lead2;
    }

    int rem = 0;
    while ( p && q ) {
      int val = p->val + q->val + rem;
      p->val = val % 10;
      rem = val / 10;

      prev = p;
      p = p->next;
      q = q->next;
    }

    while ( p ) {
      int val = p->val + rem;
      p->val = val % 10;
      rem = val / 10;

      prev = p;
      p = p->next;
    }

    if ( rem ) {
      ListNode *tmp = new ListNode(rem);
      prev->next = tmp;
    }

    return reverse(top, len1);
  }
};
```

<details>
  <summary>Note</summary>
  <li>Reverse both linked list</li>
  <li>Add parallel nodes</li>
  <li>Careful about creating extra node if occurs overflow</li>
  <li>Reverse the output linked list</li>
</details>
