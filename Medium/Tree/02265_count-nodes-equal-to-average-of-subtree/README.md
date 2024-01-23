Problem Name: [Count Nodes Equal to Average of Subtree](https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/description/)

Problem #2265

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
  int nodes = 0;
  pair < int, int > average(TreeNode *root) {
    if ( root == nullptr ) return {0, 0};

    pair < int, int > l, r;
    if ( root->left ) l = average(root->left);
    if ( root->right ) r = average(root->right);

    int total = l.first + r.first + root->val;
    int cnt = l.second + r.second + 1;
    int avg = (int)round(total/cnt);
    if ( avg == root->val ) nodes++;

    return {total, cnt};
  }

public:
  int averageOfSubtree(TreeNode* root) {
    average(root);
    return nodes;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Use depth-first search, tracking two parameters</li>
  <li>1. <code>total</code> indicates the total value of left & right subtrees and parent node</li>
  <li>2. <code>cnt</code> indicates the total nodes of left & right subtrees and parent node</li>
  <li>After left & right subtree traversal, calculate average</li>
  <li>If average & parent node value match, increase the count</li>
</details>
