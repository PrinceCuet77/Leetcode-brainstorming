Problem Name: [Find a Corresponding Node of a Binary Tree in a Clone of That Tree](https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/)

Problem #1379

Tag: `Tree` `Breadth-First Search` `Depth-First Search` `Binary Tree`

Difficulty: `Easy`

## Cpp

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
  TreeNode *result;

public:
  TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
    if ( cloned == nullptr ) return nullptr;
    if ( cloned->val == target->val ) result = cloned;

    getTargetCopy(original, cloned->left, target);
    getTargetCopy(original, cloned->right, target);

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Use DFS (Pre-order, In-order, Post-order)</li>
  <li>If value matched with <code>target</code> node store the address of that node in <code>cloned</code> & return it</li>
</details>
