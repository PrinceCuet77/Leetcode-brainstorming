Problem Name: [Create Binary Tree From Descriptions](https://leetcode.com/problems/create-binary-tree-from-descriptions/description/)

Problem #2196

Tag: `Tree` `Depth-First Search` `Breadth-First Search` `Binary Tree` `Array` `Hash Table`

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
  TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
    unordered_map < int, TreeNode* > mp;
    unordered_map < int, int > mpp;

    for ( int i = 0; i < descriptions.size(); i++ ) {
      int parent = descriptions[i][0];
      int child = descriptions[i][1];
      int isLeft = descriptions[i][2];

      TreeNode *parentNode = mp[parent];
      if ( parentNode == nullptr ) {
        parentNode = new TreeNode(parent);
        mp[parent] = parentNode;
      }

      TreeNode *childNode = mp[child];
      if ( childNode == nullptr ) {
        childNode = new TreeNode(child);
        mp[child] = childNode;
      }

      if ( isLeft ) parentNode->left = childNode;
      else parentNode->right = childNode;

      mpp[child] = parent;
    }

    for ( int i = 0; i < descriptions.size(); i++ ) {
      if ( mpp[descriptions[i][0]] == 0 ) return mp[descriptions[i][0]];
    }

    return nullptr;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use two <code>unordered_map</code></li>
>   <li>Construct tree as per instruction</li>
>   <li>Track all the child nodes parent</li>
>   <li>Loop once to <code>descriptions</code> array & find the <code>root</code> node</li>
> </details>
