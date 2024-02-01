Problem Name: [Cousins in Binary Tree](https://leetcode.com/problems/cousins-in-binary-tree/description/)

Problem #993

Tag: `Tree` `Depth-First Search` `Breadth-First Search` `Binary Search`

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
  int xdepth, ydepth, xparent, yparent;
  void findTreeProperties(TreeNode *root, int x, int y, int d, int parent) {
    if ( root == nullptr ) return;

    if ( root->val == x ) {
      xdepth = d;
      xparent = parent;
    }

    if ( root->val == y ) {
      ydepth = d;
      yparent = parent;
    }

    findTreeProperties(root->left, x, y, d+1, root->val);
    findTreeProperties(root->right, x, y, d+1, root->val);
  }
public:
  bool isCousins(TreeNode* root, int x, int y) {
    findTreeProperties(root, x, y, 0, -1);

    if ( xdepth == ydepth ) {
      if ( xparent != yparent ) return true;
      else return false;
    } else return false;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Use depth-first search & calculate both depth and parent of <code>x</code> & <code>y</code></li>
  <li>If same depth & different parents, return <code>false</code></li>
  <li>Return <code>true</code> otherwise</li>
</details>
