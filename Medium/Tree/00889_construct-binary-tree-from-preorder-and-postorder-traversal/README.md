Problem Name: [Construct Binary Tree from Preorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/description/)

Problem #889

Tag: `Tree` `Binary Tree` `Array` `Hash Table` `Divide and Conquer`

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
  unordered_map < int, int > mp;
  int index = 0;
  TreeNode *build(vector < int > &preorder, int start, int end) {
    if ( start > end ) return nullptr;

    TreeNode *root = new TreeNode(preorder[index]);
    index++;

    if ( start == end ) return root;

    int postIndex = mp[preorder[index]];
    root->left = build(preorder, start, postIndex);
    root->right = build(preorder, postIndex+1, end-1);

    return root;
  }

public:
  TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
    for ( int i = 0; i < postorder.size(); i++ ) mp[postorder[i]] = i;

    TreeNode *root = build(preorder, 0, preorder.size() - 1);

    return root;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Store <code>postorder</code> elements in the <code>unordered_map</code></li>
>   <li>Traverse <code>preorder</code> & define left & right child node as <code>postorder</code></li>
>   <li>And build the tree accordingly</li>
> </details>
