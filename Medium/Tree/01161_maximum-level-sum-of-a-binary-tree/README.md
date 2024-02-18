Problem Name: [Maximum Level Sum of a Binary Tree](https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/)

Problem #1161

Tag: `Tree` `Depth-First Search` `Breath-First Search` `Binary Tree`

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
  map < int, int > mp;
  void dfs(TreeNode *root, int d) {
    if ( root == nullptr ) return;

    mp[d] += root->val;

    dfs(root->left, d+1);
    dfs(root->right, d+1);
  }

public:
  int maxLevelSum(TreeNode* root) {
    dfs(root, 1);

    int ans = INT_MIN, result = -1;
    for ( auto m : mp ) {
      if ( ans < m.second ) {
        ans = m.second;
        result = m.first;
      }
    }

    return result;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use pre-order traversal and store level order summation using <code>map</code></li>
>   <li>Traverse <code>map</code> & find smallest level such that the summation is maximum</li>
> </details>
