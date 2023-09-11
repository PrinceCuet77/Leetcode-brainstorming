Problem Name: [Insert Greatest Common Divisors in Linked List](https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/)

Problem #2807

Difficulty: `Medium`

Cpp:

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
  ListNode* insertGreatestCommonDivisors(ListNode* head) {
    ListNode* current = head;

    while ( current->next ) {
      int nodeValue = gcd(current->val, current->next->val);
      ListNode* temp = new ListNode(nodeValue, current->next);
      current->next = temp;

      current = current->next->next;
    }

    return head;
  }

  int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
  }
};
```
