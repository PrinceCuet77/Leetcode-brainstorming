Problem Name: [Deepest Leaves Sum](https://leetcode.com/problems/deepest-leaves-sum/description/)

Problem #1302

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
  int height = 0, sum = 0;
  void sumOfLeaves(TreeNode *root, int depth) {
    if ( root->left == nullptr && root->right == nullptr ) {
      if ( depth == height ) sum += root->val;
      else if ( depth > height ) {
        height = depth;
        sum = root->val;
      }
      return;
    }

    if ( root->left ) sumOfLeaves(root->left, depth+1);
    if ( root->right ) sumOfLeaves(root->right, depth+1);
  }
public:
  int deepestLeavesSum(TreeNode* root) {
    sumOfLeaves(root, 1);
    return sum;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Calcualte depth while traversing (Depth-First Search)</li>
  <li>Tracking <code>height</code> & <code>sum</code> in class variable</li>
  <li>If leaf node is found out:</li>
  <ul>
    <li>If <code>depth == height</code>, store the node value in the <code>sum</code></li>
    <li>If <code>depth > height</code>, update <code>height</code> & assign the node value in the <code>sum</code></li>
    <li>Else return nothing</li>
  </ul>
</details>
