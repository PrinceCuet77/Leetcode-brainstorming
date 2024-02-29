Problem Name: [Distribute Coins in Binary Tree](https://leetcode.com/problems/distribute-coins-in-binary-tree/description/)

Problem #979

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
  int move = 0;
  int postorder(TreeNode *root) {
    if ( root == nullptr ) return 0;

    int left = postorder(root->left);
    int right = postorder(root->right);

    move += abs(left) + abs(right);
    return left + right + root->val - 1;
  }

public:
  int distributeCoins(TreeNode* root) {
    postorder(root);
    return move;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use post-order traversal</li>
>   <li>If the <code>root</code> is pointing to <code>nullptr</code>, return <code>0</code></li>
>   <li>Calculate <code>move</code> with the summation result of the left & right nodes</li>
>   <li>Return the summation result of the left & right nodes & <code>root→val - 1</code></li>
> </details>
