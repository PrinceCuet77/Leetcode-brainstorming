Problem Name: [Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/)

Problem #572

Tag: `Tree` `Depth-First Search` `String Matching` `Binary Tree` `Hash Function`

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
  bool isSame(TreeNode* root, TreeNode* subRoot) {
    if ( root == nullptr && subRoot == nullptr ) return true;
    if ( root == nullptr || subRoot == nullptr ) return false;
    if ( root->val == subRoot->val ) return isSame(root->left, subRoot->left) && isSame(root->right, subRoot->right);
    return false;
  }

public:
  bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    if ( root == nullptr ) return false;
    if ( isSame(root, subRoot) ) return true;
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use depth-first search</li>
>   <li>If find out same as <code>subRoot</code>, return <code>true</code></li>
>   <li>Else traverse left & right sub trees & try to find out the match with <code>subRoot</code></li>
> </details>
