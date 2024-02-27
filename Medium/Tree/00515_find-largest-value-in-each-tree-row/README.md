Problem Name: [Find Largest Value in Each Tree Row](https://leetcode.com/problems/find-largest-value-in-each-tree-row/description/)

Problem #515

Tag: `Tree` `Depth-First Search` `Breadth-First Search` `Binary Tree`

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
  vector<int> largestValues(TreeNode* root) {
    if ( root == nullptr ) return vector < int >();

    queue < TreeNode* > q;
    q.push(root);

    vector < int > v;
    while ( !q.empty() ) {
      int sz = q.size();

      int cmp = INT_MIN;
      for ( int i = 0; i < sz; i++ ) {
        TreeNode *top = q.front();
        q.pop();

        cmp = max(cmp, top->val);
        if ( top->left ) q.push(top->left);
        if ( top->right ) q.push(top->right);
      }

      v.push_back(cmp);
    }

    return v;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use Breadth-First Search</li>
>   <li>Find level-wise maximum value & store it in the <code>vector</code></li>
> </details>
