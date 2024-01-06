Problem Name: [Linked List Random Node](https://leetcode.com/problems/linked-list-random-node/)

Problem #382

Tag: `Linked List` `Math`

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
  vector < ListNode* > list;
public:
  Solution(ListNode* head) {
    ListNode *current = head;
    while ( current ) {
      list.push_back(current);
      current = current->next;
    }
  }
  
  int getRandom() {
    return list[rand() % list.size()]->val;
  }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
```

<details>
  <summary>Note</summary>
  <li>Create a <code>vector</code> & store every nodes</li>
  <li>Randomly pick any number and return that node</li>
</details>
