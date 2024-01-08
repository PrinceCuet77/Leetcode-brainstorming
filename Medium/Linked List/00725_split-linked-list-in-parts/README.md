Problem Name: [Split Linked List in Parts](https://leetcode.com/problems/split-linked-list-in-parts/description/)

Problem #725

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
  vector<ListNode*> splitListToParts(ListNode* head, int k) {
    int len = 0;
    ListNode* current = head;
    while ( current ) len++, current = current->next;

    vector < ListNode* > result;
    current = head;
    if ( len <= k ) {
      while ( k-- ) {
        ListNode *temp = current;

        if ( current ) {
          result.push_back(temp);
          current = current->next;
          temp->next = nullptr;
        }
        else result.push_back(nullptr);
      }
    } else {
      int rem = len % k;
      for ( int in = 0; in < k; in++ ) {
        for ( int i = 1; i < len / k; i++ ) {
          current = current->next;
        }

        if ( rem != 0 ) {
          current = current->next;
          rem--;
        }

        ListNode* temp = current;
        current = current->next;
        temp->next = nullptr;
        result.push_back(head);

        head = current;
      }
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Count <code>length</code></li>
  <li>If <code>length == k</code>, push every nodes in the <code>vector</code></li>
  <li>If <code>length < k</code>, push every nodes in the <code>vector</code> & push <code>nullptr</code> remaining length</li>
  <li>If <code>length > k</code>, group <code>len / k</code> nodes if <code>length % k == 0</code> & push </li>
  <li>Else group <code>len / k + 1</code> nodes til <code>length % k == 0</code></li>
</details>
