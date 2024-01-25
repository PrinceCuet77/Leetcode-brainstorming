Problem Name: [Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves/description/)

Problem #404

Tag: `Tree` `Depth-First Search` `Breath-First Search` `Binary Tree`

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
  int sum = 0;
  void leafOfSum(TreeNode *root, bool flag) {
    if ( root == nullptr ) return;
    if ( root->left == nullptr && root->right == nullptr && flag ) sum += root->val;

    leafOfSum(root->left, true);
    leafOfSum(root->right, false);
  }

public:
  int sumOfLeftLeaves(TreeNode* root) {
    leafOfSum(root, false);
    return sum;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Use DFS & keep tracking left subtree</li>
  <li>If leaf node is found out & it's come from left parent, then add to the sum</li>
</details>
