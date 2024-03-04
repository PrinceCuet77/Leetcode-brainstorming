Problem Name: [Lowest Common Ancestor of Deepest Leaves](https://leetcode.com/problems/lowest-common-ancestor-of-deepest-leaves/description/)

Problem #1123

Tag: `Tree` `Hash Table` `Depth-First Search` `Breadth-First Search` `Binary Tree`

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
  int d = 0;
  unordered_map < int, vector < int > > mp;

  TreeNode* lca(TreeNode *root) {
    if ( root == nullptr ) return root;

    for ( int value : mp[d-1] ) {
      if ( root->val == value ) return root;
    }

    TreeNode* left = lca(root->left);
    TreeNode* right = lca(root->right);

    if ( left == nullptr ) return right;
    if ( right == nullptr ) return left;

    return root;
  }

public:
  TreeNode* lcaDeepestLeaves(TreeNode* root) {
    queue < TreeNode* > q;
    q.push(root);

    while ( !q.empty() ) {
      int sz = q.size();

      for ( int i = 0; i < sz; i++ ) {
        TreeNode *top = q.front();
        q.pop();

        mp[d].push_back(top->val);

        if ( top->left ) q.push(top->left);
        if ( top->right ) q.push(top->right);
      }

      d++;
    }

    TreeNode* head = lca(root);
    return head;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Find the most deepest leaf nodes using Breadth-First Search</li>
>   <li>Find the lowest common ancestor of that deepest leaf nodes using Depth-First Search</li>
> </details>
