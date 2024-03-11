Problem Name: [Recover a Tree From Preorder Traversal](https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/description/)

Problem #1028

Tag: `Tree
Depth-First Search
Binary Tree` `String`

Difficulty: `Hard`

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
  bool isDigit(char ch) {
    return ch >= '0' && ch <= '9';
  }

public:
  TreeNode* recoverFromPreorder(string traversal) {
    unordered_map < int, TreeNode* > mp;

    TreeNode *head = nullptr;
    for ( int i = 0; i < traversal.size(); ) {
      int d = 0;
      cout << traversal[i] << endl;
      while ( i < traversal.size() && traversal[i] == '-' ) {
        d++;
        i++;
      }

      string strVal = "";
      while ( i < traversal.size() && isDigit(traversal[i]) ) {
        strVal += traversal[i];
        i++;
      }

      int nodeVal = stoi(strVal);
      TreeNode *node = new TreeNode(nodeVal);

      if ( d == 0 ) head = node;

      if ( d > 0 ) {
        TreeNode *root = mp[d-1];
        if ( root->left == nullptr ) root->left = node;
        else root->right = node;
      }

      mp[d] = node;
    }

    return head;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Traverse the <code>traversal</code> string</li>
>   <li>Count <code>-</code> which denotes as depth</li>
>   <li>Calculate the node value from <code>traversal</code> string & create a new node</li>
>   <li>Store all the nodes in the <code>unordered_map</code> to track the level-wise nodes & link accordingly left-wise</li>
> </details>
