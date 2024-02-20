Problem Name: [Convert BST to Greater Tree](https://leetcode.com/problems/convert-bst-to-greater-tree/description/)

Problem #538

Tag: `Tree` `Depth-First Search` `Binary Search Tree` `Binary Tree`

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
  stack < TreeNode* > st;
  void inorder(TreeNode *root) {
    if ( root == nullptr ) return;

    inorder(root->left);
    st.push(root);
    inorder(root->right);
  }
public:
  TreeNode* convertBST(TreeNode* root) {
    inorder(root);

    int sum = 0;
    while ( !st.empty() ) {
      TreeNode *head = st.top();
      st.pop();

      sum += head->val;
      head->val = sum;
    }

    return root;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use inorder traversal & store the nodes in <code>stack</code></li>
>   <li>Remove element from the top and add the summation to that node til empty</li>
> </details>
