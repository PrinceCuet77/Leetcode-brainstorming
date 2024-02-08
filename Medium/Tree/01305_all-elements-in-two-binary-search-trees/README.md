Problem Name: [All Elements in Two Binary Search Trees](https://leetcode.com/problems/all-elements-in-two-binary-search-trees/description/)

Problem #1305

Tag: `Tree` `Depth-First Search` `Binary Search Tree` `Sorting` `Binary Tree`

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

public:
  vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
    inorder(root1);
    inorder(root2);

    sort(store.begin(), store.end());
    return store;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use inorder traversal for both <code>root1</code> & <code>root2</code></li>
>  <li>And store the value of the nodes in the <code>vector</code></li>
>  <li>Sort the <code>vector</code> & return</li>
> </details>
