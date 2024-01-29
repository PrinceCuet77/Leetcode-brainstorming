Problem Name: [Binary Tree Tilt](https://leetcode.com/problems/binary-tree-tilt/description/)

Problem #563

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
  int sum = 0;
  int find(TreeNode *root) {
    if ( root == nullptr ) return 0;

    int l = find(root->left);
    int r = find(root->right);

    sum += abs(l - r);

    return l + r + root->val;
  }
  
public:
  int findTilt(TreeNode* root) {
    find(root);
    return sum;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Use post-order traversal</li>
  <li>Add <code>abs(l - r)</code> to the <code>sum</code> for every node</li>
  <li>For every node, return <code>l + r + root->val</code></li>
</details>
