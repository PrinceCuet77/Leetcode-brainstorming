Problem Name: [Sum Root to Leaf Numbers](https://leetcode.com/problems/sum-root-to-leaf-numbers/description/)

Problem #129

Tag: `Tree` `Depth-First Search` `Binary Tree`

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
  int result = 0;
  void dfs(TreeNode *root, string str = "") {
    if ( root == nullptr ) return;

    if ( root->left == nullptr && root->right == nullptr ) {
      str += to_string(root->val);
      result += stoi(str);
    }

    dfs(root->left, str + to_string(root->val));
    dfs(root->right, str + to_string(root->val));
  }

public:
  int sumNumbers(TreeNode* root) {
    dfs(root);
    return result;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use depth-first search & track so far visited nodes in term of <code>string</code></li>
>   <li>While facing the leaf node, add all so far visited path</li>
> </details>
