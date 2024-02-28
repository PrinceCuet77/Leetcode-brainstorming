Problem Name: [Most Frequent Subtree Sum](https://leetcode.com/problems/most-frequent-subtree-sum/)

Problem #508

Tag: `Tree` `Depth-First Search` `Binary Tree` `Hash Table`

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
  int findMax = INT_MIN;
  int dfs(TreeNode *root) {
    if ( root == nullptr ) return 0;

    int leftValue = dfs(root->left);
    int rightValue = dfs(root->right);

    int total = root->val + leftValue + rightValue;
    mp[total]++;
    findMax = max(findMax, mp[total]);

    return total;
  }

public:
  vector<int> findFrequentTreeSum(TreeNode* root) {
    dfs(root);

    vector < int > v;
    for ( auto m : mp ) {
      if ( m.second == findMax ) v.push_back(m.first);
    }

    return v;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use postorder traversal & <code>unordered_map</code> to store the frequency</li>
>   <li>Store subtree summation & find the maximum frequency while traversal</li>
>   <li>After traversal finalize the result <code>vector</code></li>
> </details>
