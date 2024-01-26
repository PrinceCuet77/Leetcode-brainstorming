Problem Name: [Construct String from Binary Tree](https://leetcode.com/problems/construct-string-from-binary-tree/description/)

Problem #606

Tag: `Tree` `String` `Depth-First Search` `Binary Tree`

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
  string str = "";
  void build(TreeNode *root) {
    if ( root == nullptr ) return;

    str += to_string(root->val);
    if ( root->left || root->right ) {
      str += "(";
      build(root->left);
      str += ")";
    }
    if ( root->right ) {
      str += "(";
      build(root->right);
      str += ")";
    }
  }
public:
  string tree2str(TreeNode* root) {
    build(root);
    return str;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Store <code>root->val</code> to the string</li>
  <li>If any left & right node is not <code>nullptr</code>, store <code>(</code>, traverse left node & then store <code>)</code></li>
  <li>If only right node is not <code>nullptr</code>, store <code>(</code>, traverse right node & then store <code>)</code></li>
</details>
