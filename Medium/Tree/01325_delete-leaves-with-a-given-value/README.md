Problem Name: [Delete Leaves With a Given Value](https://leetcode.com/problems/delete-leaves-with-a-given-value/description/)

Problem #1325

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
  TreeNode* removeLeafNodes(TreeNode* root, int target) {
    if ( root == nullptr ) return nullptr;

    if ( root->left ) root->left = removeLeafNodes(root->left, target);
    if ( root->right ) root->right = removeLeafNodes(root->right, target);

    if ( root->val == target && root->left == nullptr && root->right == nullptr ) return nullptr;

    return root;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use post-order traversal</li>
>   <li>If node value matches with <code>target</code> & it's a leaf node return <code>nullptr</code></li>
> </details>
