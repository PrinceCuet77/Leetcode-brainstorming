Problem Name: [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)

Problem #230

Tag: `Tree` `Depth-First Search` `Breadth-First Search` `Tree`

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
  int cnt = 0, minValue = -1;
  void findSmallest(TreeNode *root, int k) {
    if ( root == nullptr ) return;

    findSmallest(root->left, k);
    cnt++;
    if ( cnt == k ) {
      minValue = root->val;
      return;
    }
    findSmallest(root->right, k);
  }
public:
  int kthSmallest(TreeNode* root, int k) {
    findSmallest(root, k);
    return minValue;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use inorder traversal</li>
>   <li>While visiting on the <code>root</code> node, count & find the <code>k-th</code> smallest element</li>
> </details>