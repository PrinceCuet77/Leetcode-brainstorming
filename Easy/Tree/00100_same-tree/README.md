Problem Name: [Same Tree](https://leetcode.com/problems/same-tree/description/)

Problem #100

Tag: `Tree` `Depth-First Search` `Breadth-First Search` `Binary Tree`

Difficulty: `Easy`

## Cpp

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  bool isSameTree(TreeNode* p, TreeNode* q) {
    if ( p == nullptr && q == nullptr ) return true;

    if ( p == nullptr || q == nullptr ) return false;

    if ( p->val == q->val ) return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

    return false;
  }
};
```

<details>
  <summary>Note</summary>
  <li>If both <code>p</code> & <code>q</code> are <code>nullptr</code>, return <code>true</code></li>
  <li>If any of the node <code>nullptr</code>, return <code>false</code></li>
  <nd>If both node values are same, then traverse left subtree & right subtree and connect them with <code>&&</code></li>
  <li>Otherwise return <code>false</code></li>
</details>
