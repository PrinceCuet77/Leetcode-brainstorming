Problem Name: [Root Equals Sum of Children](https://leetcode.com/problems/root-equals-sum-of-children/description/)

Problem #2236

Tag: `Tree` `Binary Tree`

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
  bool checkTree(TreeNode* root) {
    if ( root->val == root->left->val + root->right->val ) return true;
    return false;
  }
};
```

<details>
  <summary>Note</summary>
  <li>If the value of <code>root</code> is equal to the value of <code>left</code> child & <code>right</code> child, return <code>true</code></li>
  <li>Otherwise <code>false</code></li>
</details>
