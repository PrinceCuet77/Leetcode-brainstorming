Problem Name: [Sum of Nodes with Even-Valued Grandparent](https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/description/)

Problem #1315

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
  int sum = 0;
  void findSum(TreeNode *root) {
    if ( root == nullptr ) return;

    if ( root->val % 2 == 0 ) {
      if ( root->left && root->left->left ) sum += root->left->left->val;
      if ( root->left && root->left->right ) sum += root->left->right->val;
      if ( root->right && root->right->left ) sum += root->right->left->val;
      if ( root->right && root->right->right ) sum += root->right->right->val;
    }

    findSum(root->left);
    findSum(root->right);
  }

public:
  int sumEvenGrandparent(TreeNode* root) {
    findSum(root);
    return sum;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use depth-first search</li>
>   <li>While finding out the node value is even, add all the 2nd order depth left & right child from the root node</li>
> </details>
