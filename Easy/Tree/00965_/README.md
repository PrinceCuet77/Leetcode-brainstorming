Problem Name: [Univalued Binary Tree](https://leetcode.com/problems/univalued-binary-tree/)

Problem #965

Tag: `Tree` `Depth-First Search` `Breadth-First Search` `Binary Tree`

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
  void findingUnival(TreeNode *root, TreeNode *rootNode, bool &isUnival) {
    if ( root == nullptr ) return;
    if ( root->val != rootNode->val && root != rootNode ) {
      isUnival = false;
      return;
    }

    findingUnival(root->left, rootNode, isUnival);
    findingUnival(root->right, rootNode, isUnival);
  }
  
public:
  bool isUnivalTree(TreeNode* root) {
    bool isUnival = true;
    findingUnival(root, root, isUnival);
    return isUnival;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Use Depth-First Search</li>
  <li>If doesn't match return <code>false</code> & otherwise return <code>true</code></li>
</details>
