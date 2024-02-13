Problem Name: [Count Good Nodes in Binary Tree](https://leetcode.com/problems/count-good-nodes-in-binary-tree/description/)

Problem #1448

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
  int count = 0;
  void traverse(TreeNode *root, int maxValue) {
    if ( root == nullptr ) return;

    if ( root->val >= maxValue ) {
      count++;
      maxValue = max(root->val, maxValue);
    }

    traverse(root->left, maxValue);
    traverse(root->right, maxValue);
  }

public:
  int goodNodes(TreeNode* root) {
    traverse(root, root->val);
    return count;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use inorder traversal</li>
>   <li>Track the maximum value of so far visited nodes</li>
>   <li>If so far maximum value is greater or equal to <code>root->val</code>, increase good nodes number</li>
> </details>
