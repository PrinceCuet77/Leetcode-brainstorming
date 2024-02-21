Problem Name: [Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst/)

Problem #450

Tag: `Tree` `Binary Search Tree` `Binary Tree`

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
  TreeNode* inorderSuccessor(TreeNode *root) {
    while ( root->left != NULL ) root = root->left;
    return root;
  }
public:
  TreeNode* deleteNode(TreeNode* root, int key) {
    if (root == nullptr ) return root;

    if ( root->val > key ) root->left = deleteNode(root->left, key);
    else if ( root->val < key ) root->right = deleteNode(root->right, key);
    else {
      if ( root->left == nullptr && root->right == nullptr ) return nullptr;
      else if ( root->left == nullptr ) return root->right;
      else if ( root->right == nullptr ) return root->left;
      else if ( root->val == key && root->left && root->right ) {
        cout << root->val << endl;
        TreeNode *node = inorderSuccessor(root->right);
        root->val = node->val;
        root->right = deleteNode(root->right, node->val);
      }
    }

    return root;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Handle if the <code>root</code> node is <code>nullptr</code></li>
>   <li>If leaf node will be deleted, return <code>nullptr</code></li>
>   <li>If deleted node has only left node, return left node</li>
>   <li>If deleted node has only right node, return right node</li>
>   <li>If deleted node has both child, find inorder successor</li>
>   <li>Inorder successor is nothing but left most node in right subtree</li>
>   <li>Replace the value of <code>root</code> with inorder successor & delete inorder successor</li>
> </details>
