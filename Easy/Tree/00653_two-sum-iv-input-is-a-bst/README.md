Problem Name: [Two Sum IV - Input is a BST](https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/)

Problem #653

Tag: `Tree` `Depth-First Search` `Breath-First Search` `Binary Tree` `Binary Search Tree` `Two Pointers` `Hash Table`

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
  vector < int > store;
  bool flag = false;

  void search(TreeNode *root, int data, int ignoredData) {
    if ( root == nullptr ) return;
    if ( root->val == data && root->val != ignoredData ) {
      flag = true;
      return;
    }
    else if ( root->val > data ) search(root->left, data, ignoredData);
    else if ( root->val < data ) search(root->right, data, ignoredData);
  }

  void inorder(TreeNode *root) {
    if ( root == nullptr ) return;
    
    inorder(root->left);
    store.push_back(root->val);
    inorder(root->right);
  }
  
public:
  bool findTarget(TreeNode* root, int k) {
    if ( root == nullptr ) return false;

    inorder(root);

    for ( int i = 0; i < store.size(); i++ ) {
      search(root, k - store[i], store[i]);
      if ( flag ) return flag;
    }

    return flag;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Use in-order traversal & store all the node value in the <code>vector</code></li>
  <li>Traverse every element from <code>vector</code> & search <code>k - store[i]</code> value to the BST</li>
</details>
