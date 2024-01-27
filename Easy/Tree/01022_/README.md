Problem Name: [Sum of Root To Leaf Binary Numbers](https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/)

Problem #1022

Tag: `Tree` `Depth-First Search` `Binary Tree`

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
  int sumRoot(TreeNode *root, int sum) {
    if ( root == nullptr ) return 0;

    // sum = sum * 2 + root->val;
    sum = (sum << 1) | root->val;

    if ( root->left == nullptr && root->right == nullptr ) return sum;
    return sumRoot(root->left, sum) + sumRoot(root->right, sum);
  }
public:
  int sumRootToLeaf(TreeNode* root) {
    return sumRoot(root, 0);
  }
};
```

<details>
  <summary>Note</summary>
  <li>Use bit-wise operator for convertion to get more efficient code</li>
  <li>If leaf node is found out, return <code>sum</code> or so far calculation</li>
  <li>Return the sum of left & right nodes</li>
</details>
