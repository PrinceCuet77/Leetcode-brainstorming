Problem Name: [Second Minimum Node In a Binary Tree](https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/description/)

Problem #761

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
  int secMax = INT_MAX, cnt = 0;

  void findSecondMaxVal(TreeNode *root, int minValue) {
    if ( root == nullptr ) return;

    if ( root->val == INT_MAX ) cnt++;
    if ( root->val > minValue && root->val < secMax ) secMax = root->val;

    findSecondMaxVal(root->left, minValue);
    findSecondMaxVal(root->right, minValue);
  }

public:
  int findSecondMinimumValue(TreeNode* root) {
    findSecondMaxVal(root, root->val);

    if ( cnt == 0 || cnt > 1 ) {
      return secMax == INT_MAX ? -1 : secMax;
    }
    return secMax;
  }
};
```

> [!NOTE]
> 
> <details>
>   <li>Use depth-first search, find the value between <code>root</code> & <code>INT_MAX</code></li>
>   <li>As, the value of <code>root</code> must be the smallest value in the whole tree</li>
> </details>