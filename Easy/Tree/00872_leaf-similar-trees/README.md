Problem Name: [Leaf-Similar Trees](https://leetcode.com/problems/leaf-similar-trees/description/)

Problem #872

Tag: `Tree` `Depth-First Search` `Binary Tree`

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
  vector < int > r1, r2;

  void storingLeaf(TreeNode *root, bool isRoot1 = true) {
    if ( root->left == nullptr && root->right == nullptr ) {
      if ( isRoot1 ) r1.push_back(root->val);
      else r2.push_back(root->val);
      return;
    }

    if ( root->left ) storingLeaf(root->left, isRoot1);
    if ( root->right ) storingLeaf(root->right, isRoot1);
  }
public:
  bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    storingLeaf(root1);
    storingLeaf(root2, false);

    if ( r1.size() != r2.size() ) return false;

    for ( int i = 0; i < r1.size(); i++ ) {
      if ( r1[i] != r2[i] ) return false;
    }

    return true;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Traverse <code>root1</code> & <code>root2</code> and store leaf in different <code>vector</code></li>
  <li>Compare two <code>vector</code></li>
</details>
