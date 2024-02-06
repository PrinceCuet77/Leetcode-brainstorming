Problem Name: [Binary Search Tree to Greater Sum Tree](https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/description/)

Problem #1038

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
  vector < int > store;
  void inorder(TreeNode *root) {
    if ( root == nullptr ) return;

    inorder(root->left);
    store.push_back(root->val);
    inorder(root->right);
  }

  void fixBSTNodes(TreeNode *root, int data, int updatedData) {
    if ( root == nullptr ) return;

    if ( root->val == data ) {
      root->val = updatedData;
      return;
    } else if ( root->val > data ) fixBSTNodes(root->left, data, updatedData);
    else fixBSTNodes(root->right, data, updatedData);
  }

public:
  TreeNode* bstToGst(TreeNode* root) {
    inorder(root);

    for ( int i = store.size() - 2; i >= 0; i-- ) {
      fixBSTNodes(root, store[i], store[i] + store[i+1]);
      store[i] += store[i+1];
    }

    return root;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use inorder traversal & store the nodes in <code>vector</code></li>
>   <li>Traverse the vector backword & store the so far summation in the specific node</li>
> </details>
