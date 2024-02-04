Problem Name: [Construct Binary Search Tree from Preorder Traversal](https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/)

Problem #1008

Tag: `Tree` `Array` `Stack` `Binary Search Tree` `Binary Tree` `Monotonic Stack`

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
  TreeNode* buildBST(TreeNode *root, int data) {
    if ( root == nullptr ) {
      root = new TreeNode(data);
      return root;
    }

    if ( root->val > data ) root->left = buildBST(root->left, data);
    else root->right = buildBST(root->right, data);

    return root;
  }

public:
  TreeNode* bstFromPreorder(vector<int>& preorder) {
    TreeNode *root = new TreeNode(preorder[0]);
    for ( int i = 1; i < preorder.size(); i++ ) {
      root = buildBST(root, preorder[i]);
    }

    return root;
  }
};
```

> [!NOTE]
> <details>
>   <li>Make <code>preorder[0]</code> root of the tree</li>
>   <li>Build the rest of the tree by traversing the rest of the array</li>
> </details>