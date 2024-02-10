Problem Name: [Find Elements in a Contaminated Binary Tree](https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/description/)

Problem #1261

Tag: `Tree` `Depth-First Search` `Breadth-First Search` `Binary Tree` `Hash Table` `Design`

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
class FindElements {
  unordered_map < int, bool > mp;
  void recoveringTree(TreeNode *root) {
    if ( root == nullptr ) return;

    mp[root->val] = true;

    if ( root->left ) {
      root->left->val = 2 * root->val + 1;
      recoveringTree(root->left);
    }

    if ( root->right ) {
      root->right->val = 2 * root->val + 2;
      recoveringTree(root->right);
    }
  }

public:
  FindElements(TreeNode* root) {
    root->val = 0;
    recoveringTree(root);
  }

  bool find(int target) {
    return mp[target];
  }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
```

> [!NOTE]
>
> <details>
>   <li>Use <code>unordered_map</code> for storing the recovered node values</li>
>   <li>Recover the tree as per question</li>
>   <li>Return <code>true</code> or <code>false</code>, if <code>target</code> exist or not</li>
> </details>
