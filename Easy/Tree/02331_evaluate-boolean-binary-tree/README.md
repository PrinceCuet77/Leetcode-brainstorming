Problem Name: [Evaluate Boolean Binary Tree](https://leetcode.com/problems/evaluate-boolean-binary-tree/description/)

Problem #2331

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
public:
  bool evaluateTree(TreeNode* root) {
    if ( root->val < 2 ) return root->val;

    if ( root->val == 2 ) return evaluateTree(root->left) || evaluateTree(root->right);
		return evaluateTree(root->left) && evaluateTree(root->right);
  }
};
```

<details>
  <summary>Note</summary>
  <li>Use depth-first search</li>
  <li>Base case: <code>root->val < 2</code>, return <code>root->val</code></li>
  <li>If <code>root->val == 2</code>, traverse left & right and use <code>||</code> operation</li>
  <li>If <code>root->val == 3</code>, traverse left & right and use <code>&&</code> operation</li>
</details>
