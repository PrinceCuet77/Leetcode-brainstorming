Problem Name: [Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/)

Problem #108

Tag: `Tree` `Binary Search Tree` `Binary Tree` `Array` `Divide and Conquer`

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
  TreeNode* buildBST(vector < int >& nums, int low, int high) {
    if ( low > high ) return nullptr;

    int mid = (low + high) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = buildBST(nums, low, mid-1);
    root->right = buildBST(nums, mid+1, high);

    return root;
  }
public:
  TreeNode* sortedArrayToBST(vector<int>& nums) {
    return buildBST(nums, 0, nums.size()-1);
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use pre-order traversal</li>
>   <li>Find the middle element of the given array & create a node</li>
>   <li>Traverse <code>low</code> to <code>mid-1</code> & link it with <code>left</code> pointer of the newly created node</li>
>   <li>And traverse <code>mid+1</code> to <code>high</code> & link it with <code>right</code> pointer of newly created node</li>
> </details>
