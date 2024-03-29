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
  vector < TreeNode* > store;
  void inorder(TreeNode *root) {
    if ( root == nullptr ) return;

    inorder(root->left);
    store.push_back(root);
    inorder(root->right);
  }

public:
  TreeNode* bstToGst(TreeNode* root) {
    inorder(root);

    int total = store[store.size() - 1]->val;
    for ( int i = store.size() - 2; i >= 0; i-- ) {
      total += store[i]->val;
      store[i]->val = total;
    }

    return root;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use inorder traversal & store the nodes in <code>vector</code></li>
>   <li>Traverse the vector backword & re-store the value so far summation in the specific node</li>
> </details>
