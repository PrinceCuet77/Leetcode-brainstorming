Problem Name: [Delete Nodes And Return Forest](https://leetcode.com/problems/delete-nodes-and-return-forest/)

Problem #1110

Tag: `Array` `Hash Table` `Tree` `Depth-First Search` `Binary Tree`

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
  unordered_map < int, bool > mp;
  vector < TreeNode* > forest;
  void makeForest(TreeNode *&root) {
    if ( root == nullptr ) return;

    makeForest(root->left);
    makeForest(root->right);

    if ( mp[root->val] ) {
      if ( root->left ) forest.push_back(root->left);
      if ( root->right ) forest.push_back(root->right);
      root = nullptr;
    }
  }

public:
  vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
    for ( int node : to_delete ) mp[node] = true;

    if ( mp[root->val] == false ) forest.push_back(root);
    makeForest(root);

    return forest;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use post-order traversal</li>
>   <li>If the node should be deleted, then store its left & right child in the <code>vector</code></li>
>   <li>Must pass a reference of the <code>root</code> node</li>
> </details>
