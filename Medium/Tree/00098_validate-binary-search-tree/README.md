Problem Name: [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/description/)

Problem #98

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
  bool dfs(TreeNode *root, long long m, long long n) {
    if ( root == nullptr ) return true;

    if ( root->val > m && root->val < n )
        return dfs(root->left, m, root->val) && dfs(root->right, root->val, n);
    else return false;
  }

public:
  bool isValidBST(TreeNode* root) {
    return dfs(root, -1000000000000, 1000000000000);
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Check if <code>root->val</code> is in between <code>INT_MIN</code> & <code>INT_MAX</code></li>
>   <li>If <code>true</code> then traverse left subtree using minimum value faced so far & <code>root->val</code></li>
>   <li>Else traverse right subtree using <code>root->val</code> & maximum value faced so far</li>
>   <li>Otherwise return <code>false</code></li>
> </details>
