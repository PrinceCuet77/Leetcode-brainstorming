Problem Name: [Merge Nodes in Between Zeros](https://leetcode.com/problems/merge-nodes-in-between-zeros/)

Problem #2181

Tag: `Linked List` `Simulation`

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
  ListNode* mergeNodes(ListNode* head) {
    ListNode *result = nullptr, *p = nullptr;
    int count = 0;
    for ( ListNode *current = head; current != nullptr; current = current->next ) {
      if ( current->val == 0 && count != 0 ) {
        ListNode *temp = new ListNode(count);

        if ( result ) p->next = temp;
        else result = temp;

        p = temp;
        count = 0;
      } else {
        count += current->val;
      }
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>If <code>0</code>, create a new node & attach to the result node</li>
  <li>Otherwise keep counting</li>
</details>
