Problem Name: [Binary Tree Pruning](https://leetcode.com/problems/binary-tree-pruning/description/)

Problem #814

Tag: `Tree` `Depth-First Search` `Binary Tree`

Difficulty: `Medium`

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
  TreeNode* pruneTree(TreeNode* root) {
    if ( root == nullptr ) return root;

    root->left = pruneTree(root->left);
    root->right = pruneTree(root->right);

    if ( root->left == nullptr && root->right == nullptr && root->val == 0 ) return nullptr;

    return root;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use post-order traversal</li>
>   <li>If leaf node & the value of <code>root</code> node is <code>0</code>, return <code>nullptr</code></li>
> </details>
