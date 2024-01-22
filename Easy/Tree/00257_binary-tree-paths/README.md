Problem Name: [Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/description/)

Problem #257

Tag: `Tree` `Backtracking` `String` `Depth-First Search` `Binary Tree`

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
  vector < string > result;
  void path(TreeNode *root, string &str) {
    if ( root->left == nullptr && root->right == nullptr ) {
      result.push_back(str);
      return;
    }

    if ( root->left ) {
      string newStr = str + "->" + to_string(root->left->val);
      path(root->left, newStr);
    }

    if ( root->right ) {
      string newStr = str + "->" + to_string(root->right->val);
      path(root->right, newStr);
    }
  }

public:
  vector<string> binaryTreePaths(TreeNode* root) {
    string str = to_string(root->val);
    path(root, str);
    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Use depth-first search & keep tracking the path</li>
  <li>If found out the leaf node, store the tracking path in the <code>vector</code></li>
</details>
