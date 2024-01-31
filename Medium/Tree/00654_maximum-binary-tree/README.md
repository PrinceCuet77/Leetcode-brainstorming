Problem Name: [Maximum Binary Tree](https://leetcode.com/problems/maximum-binary-tree/description/)

Problem #654

Tag: `Tree` `Binary Tree` `Stack` `Monotonic Stack` `Array` `Divide and Conquer`

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
  int findMaxIndex(vector < int >& nums, int start, int end) {
    int maxIndex = start;
    for ( int i = start + 1; i <= end; i++ ) {
      if ( nums[i] > nums[maxIndex] ) maxIndex = i;
    }
    return maxIndex;
  }

  TreeNode* buildMaxBT(vector < int >& nums, int start, int end) {
    if ( start > end ) return nullptr;

    int maxIndex = findMaxIndex(nums, start, end);
    TreeNode *root = new TreeNode(nums[maxIndex]);

    if ( start == end ) return root;

    root->left = buildMaxBT(nums, start, maxIndex - 1);
    root->right = buildMaxBT(nums, maxIndex + 1, end);

    return root;
  }
public:
  TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
    return buildMaxBT(nums, 0, nums.size() - 1);
  }
};
```

<details>
  <summary>Note</summary>
  <li>Find maximum value in the given <code>vector</code> & make it <code>root</code></li>
  <li>Find next maximum value of the left & right of the previous maximum value & join with <code>root</code> as left & right child respectively</li>
</details>
