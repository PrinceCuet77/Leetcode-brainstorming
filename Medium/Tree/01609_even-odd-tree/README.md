Problem Name: [Even Odd Tree](https://leetcode.com/problems/even-odd-tree/description/)

Problem #1609

Tag: `Tree` `Breadth-First Search` `Binary Tree`

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
  bool isValidate(bool level, int value, int &cmp) {
    if ( level ) {
      if ( value % 2 == 1 ) return false;
      if ( cmp > value ) cmp = value;
      else return false;
    }
    else {
      if ( value % 2 == 0 ) return false;
      if ( cmp < value ) cmp = value;
      else return false;
    }
    return true;
  }

public:
  bool isEvenOddTree(TreeNode* root) {
    queue < TreeNode* > q;
    q.push(root);

    bool level = true;
    if ( root->val % 2 == 0 ) return false;

    while ( !q.empty() ) {
      int sz = q.size();
      int cmp;
      if ( level ) cmp = INT_MAX;
      else cmp = INT_MIN;

      for ( int i = 0; i < sz; i++ ) {
        TreeNode *top = q.front();
        q.pop();

        if ( top->left ) {
          q.push(top->left);
          bool flag = isValidate(level, top->left->val, cmp);
          if ( !flag ) return false;
        }

        if ( top->right ) {
          q.push(top->right);
          bool flag = isValidate(level, top->right->val, cmp);
          if ( !flag ) return false;
        }
      }

      level = !level;
    }

    return true;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use Breadth-First Search</li>
>   <li>Maintain as per question, otherwise return <code>false</code></li>
> </details>
