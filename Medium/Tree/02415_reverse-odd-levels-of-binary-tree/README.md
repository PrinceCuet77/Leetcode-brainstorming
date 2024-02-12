Problem Name: [Reverse Odd Levels of Binary Tree](https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/description/)

Problem #2415

Tag: `Tree` `Depth-First Search` `Breadth-First Search` `Binary Tree`

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
public:
  TreeNode* reverseOddLevels(TreeNode* root) {
    queue < TreeNode* > q;
    q.push(root);

    bool isReverse = false;
    while ( !q.empty() ) {
      vector < TreeNode* > nodes;
      int len = q.size();
      for ( int i = 0; i < len; i++ ) {
        TreeNode *node = q.front();
        q.pop();

        if ( node->left ) q.push(node->left);
        if ( node->right ) q.push(node->right);

        nodes.push_back(node);
      }

      if ( isReverse ) {
        for ( int i = 0; i < nodes.size() / 2; i++ ) {
          int tmp = nodes[i]->val;
          nodes[i]->val = nodes[nodes.size() - i - 1]->val;
          nodes[nodes.size() - i - 1]->val = tmp;
        }
        isReverse = false;
      } else isReverse = true;
    }

    return root;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use Breadth-First Search</li>
>   <li>Maintain a boolean value for reversing the values of odd level</li>
>   <li>For odd level, store all the odd level nodes value in the <code>vector</code> & reverse it</li>
> </details>
