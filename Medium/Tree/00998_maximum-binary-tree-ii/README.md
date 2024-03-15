Problem Name: [Maximum Binary Tree II](https://leetcode.com/problems/maximum-binary-tree-ii/description/)

Problem #998

Tag: `Tree` `Binary Tree`

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
  TreeNode* insert(TreeNode* root, int val) {
    if ( root == nullptr ) return new TreeNode(val);

    if ( root->val < val ) {
      TreeNode* node = new TreeNode(val);
      node->left = root;
      return node;
    } else {
      root->right = insert(root->right, val);
    }

    return root;
  }

public:
  TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
    return insert(root, val);
  }
};
```

> [!NOTE]
>
> <details>
>   <li>If <code>root == nullptr</code>, create a new node & return it</li>
>   <li>If <code>root->val < val</code>, create a new node & link between left of the new node & <code>root</code></li>
>   <li>else traverse right subtree with <code>val</code> & link the output in right of the <code>root</code> node</li>
> </details>
