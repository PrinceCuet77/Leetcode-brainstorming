Problem Name: [Trim a Binary Search Tree](https://leetcode.com/problems/trim-a-binary-search-tree/description/)

Problem #669

Tag: `Tree` `Depth-First Search` `Binary Search Tree` `Binary Tree`

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
  TreeNode* trimBST(TreeNode* root, int low, int high) {
    if ( root == nullptr ) return root;

    if ( root->val >= low && root->val <= high ) {
      root->left = trimBST(root->left, low, high);
      root->right = trimBST(root->right, low, high);
    } else if ( root->val < low ) return trimBST(root->right, low, high);
    else if ( root->val > high ) return trimBST(root->left, low, high);

    return root;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>If <code>root->val</code> inside the <code>low</code> & <code>high</code>, traverse left & right</li>
>   <li>If <code>root->val < low</code>, traverse right subtree</li>
>   <li>If <code>root->val > high</code>, traverse left subtree</li>
>   <li>Finally join them all</li>
> </details>
