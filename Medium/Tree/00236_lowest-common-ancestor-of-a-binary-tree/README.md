Problem Name: [Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)

Problem #236

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
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if ( root == nullptr ) return root;

    if ( root->val == p->val || root->val == q->val ) return root;

    TreeNode *left = lowestCommonAncestor(root->left, p, q);
    TreeNode *right = lowestCommonAncestor(root->right, p, q);

    if ( left == nullptr ) return right;
    if ( right == nullptr ) return left;

    return root;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>If <code>root</code> is <code>p->val</code> or <code>q->val</code>, return <code>root</code></li>
>   <li>Traverse left & right subtrees</li>
>   <li>If left subtree returns <code>nullptr</code>, the output will be <code>right</code></li>
>   <li>If right subtree returns <code>nullptr</code>, the output will be <code>left</code></li>
>   <li>If left & right subtrees both are <code>nullptr</code>, then return <code>root</code>
> </details>
