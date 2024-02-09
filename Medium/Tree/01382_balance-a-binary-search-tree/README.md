Problem Name: [Balance a Binary Search Tree](https://leetcode.com/problems/balance-a-binary-search-tree/description/)

Problem #1382

Tag: `Tree` `Depth-First Search` `Binary Search Tree` `Binary Tree` `Greedy` `Divide and Conquer`

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
  vector < int > store;
  void storeNodes(TreeNode* root) {
    if ( root == nullptr ) return;

    storeNodes(root->left);
    store.push_back(root->val);
    storeNodes(root->right);
  }

  TreeNode* buildtree(int l, int r) {
    if( l > r ) return nullptr;

    int mid = l + (r - l) / 2;
    int value = store[mid];

    TreeNode* root = new TreeNode(value);

    root->left = buildtree(l , mid-1);
    root->right = buildtree(mid+1, r);

    return root;
  }

public:
  TreeNode* balanceBST(TreeNode* root) {
    storeNodes(root);

    TreeNode* head = buildtree(0, store.size()-1);
    return head;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use inorder traversal & store all the value of nodes in <code>vector</code></li>
>  <li>Find middle elements of the <code>vector</code> & build a new tree</li>
> </details>
