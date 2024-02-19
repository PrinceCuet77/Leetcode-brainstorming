Problem Name: [Cousins in Binary Tree II](https://leetcode.com/problems/cousins-in-binary-tree-ii/)

Problem #2641

Tag: `Hash Table` `Tree` `Depth-First Search` `Breadth-First Search` `Binary Tree`

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
  TreeNode* replaceValueInTree(TreeNode* root) {
    root->val = 0;

    queue < TreeNode* > q;
    q.push(root);
    while ( !q.empty() ) {
      int n = q.size();

      int sum = 0;
      vector < TreeNode* > nodes;
      for ( int i = 0; i < n; i++ ) {
        TreeNode *top = q.front();
        q.pop();
        nodes.push_back(top);

        if ( top->left ) {
          sum += top->left->val;
          q.push(top->left);
        }

        if ( top->right ) {
          sum += top->right->val;
          q.push(top->right);
        }
      }

      for ( TreeNode* node : nodes ) {
        int s = sum;
        if ( node->left ) s -= node->left->val;
        if ( node->right ) s -= node->right->val;

        if ( node->left ) node->left->val = s;
        if ( node->right ) node->right->val = s;
      }
    }

    return root;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use Breadth-First Search</li>
>   <li>Count level order summation & store children in <code>vector</code></li>
>   <li>Traverse <code>vector</code> & re-assign the value</li>
> </details>
