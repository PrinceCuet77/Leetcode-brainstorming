Problem Name: [Maximum Difference Between Node and Ancestor](https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/description/)

Problem #1026

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
  void findingMaxDiff(TreeNode *root, int &diff, int maxValue, int minValue) {
    if ( root == nullptr ) return;

    diff = max(diff, max(abs(maxValue - root->val), abs(minValue - root->val)));
    maxValue = max(maxValue, root->val);
    minValue = min(minValue, root->val);

    findingMaxDiff(root->left, diff, maxValue, minValue);
    findingMaxDiff(root->right, diff, maxValue, minValue);
  }

public:
  int maxAncestorDiff(TreeNode* root) {
    int diff = 0;
    findingMaxDiff(root, diff, root->val, root->val);
    return diff;
  }
};
```

> [!NOTE]
> <details>
>   <li>Initial <code>diff = 0</code>, <code>maxValue</code> & <code>minValue</code> as <code>root->val</code></li>
>   <li>Use depth-first search</li>
>   <li>For every node, re-calculate & update <code>diff</code>, <code>maxValue</code> & <code>minValue</code></li>
> </details>