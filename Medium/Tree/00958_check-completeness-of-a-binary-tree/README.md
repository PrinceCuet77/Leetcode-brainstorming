Problem Name: [Check Completeness of a Binary Tree](https://leetcode.com/problems/check-completeness-of-a-binary-tree/)

Problem #958

Tag: `Tree` `Breadth-First Search` `Binary Tree`

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
  bool isCompleteTree(TreeNode* root) {
    queue < TreeNode* > q;
    q.push(root);

    bool final = false;
    while ( !q.empty() ) {
      int sz = q.size();

      vector < TreeNode* > nodes;
      for ( int i = 0; i < sz; i++ ) {
        TreeNode *top = q.front();
        q.pop();

        if ( top->left ) q.push(top->left);
        if ( top->right ) q.push(top->right);

        if ( (top->left || top->right) && final ) return false;

        nodes.push_back(top->left);
        nodes.push_back(top->right);
      }

      if ( nodes.size() == 0 ) continue;

      bool flag = false;
      for ( TreeNode *node : nodes ) {
        if ( flag && node ) return false;
        if ( node == nullptr ) {
          final = true;
          flag = true;
        }
      }
    }

    return true;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use Breadth-First Search</li>
>   <li>Check all the nodes are left-aligned on the last level only</li>
> </details>
