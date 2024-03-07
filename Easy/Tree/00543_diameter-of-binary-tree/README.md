Problem Name: [Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/)

Problem #543

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
  int d = 0;
  int dfs(TreeNode *root) {
    if ( root == nullptr ) return 0;

    int x = dfs(root->left);
    int y = dfs(root->right);
    d = max(d, x + y);

    return max(x, y) + 1;
  }

public:
  int diameterOfBinaryTree(TreeNode* root) {
    dfs(root);
    return d;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use depth-first search</li>
>   <li>Calculate the summation of left & right subtrees height</li>
>   <li>Track the longest height faced so far</li>
> </details>
