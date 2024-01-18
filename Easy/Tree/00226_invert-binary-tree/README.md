Problem Name: [Invert Binary Search](https://leetcode.com/problems/invert-binary-tree/description/)

Problem #226

Tag: `Tree`

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
  TreeNode* invertTree(TreeNode* root) {
    if ( root == nullptr ) return root;

    invertTree(root->left);
    invertTree(root->right);

    TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;

    return root;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Traverse left & right child</li>
  <li>After that swap both of them</li>
</details>
