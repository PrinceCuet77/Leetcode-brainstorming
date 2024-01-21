Problem Name: [Count Complete Tree Nodes](https://leetcode.com/problems/count-complete-tree-nodes/description/)

Problem #222

Tag: `Tree` `Binary Search` `Bit Manipulation` `Binary Tree`

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
  void count(TreeNode *root, int &cnt) {
    if ( root == nullptr ) return;

    cnt++;
    count(root->left, cnt);
    count(root->right, cnt);
  }

public:
  int countNodes(TreeNode* root) {
    int cnt = 0;
    count(root, cnt);
    return cnt;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Traverse the tree & count the not <code>nullptr</code> nodes</li>
</details>
