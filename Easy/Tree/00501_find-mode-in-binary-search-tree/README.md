Problem Name: [Find Mode in Binary Search Tree](https://leetcode.com/problems/find-mode-in-binary-search-tree/description/)

Problem #501

Tag: `Tree` `Depth-First Search` `Binary Search Tree` `Binary Tree`

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
  unordered_map < int, int > mp;
  void dfs(TreeNode *root) {
    if ( root == nullptr ) return;

    mp[root->val]++;

    dfs(root->left);
    dfs(root->right);
  }
public:
  vector<int> findMode(TreeNode* root) {
    dfs(root);

    int mx = INT_MIN;
    for ( auto m : mp ) mx = max(mx, m.second);

    vector < int > nodes;
    for ( auto m : mp ) {
      if ( m.second == mx ) nodes.push_back(m.first);
    }

    return nodes;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use depth-first search & store every node value in the <code>unordered_map</code></li>
>   <li>Traverse <code>unordered_map</code> & find the maximum frequency of any values</li>
>   <li>All the maximum frequencies value will store in <code>vector</code> & return it</li>
> </details>
