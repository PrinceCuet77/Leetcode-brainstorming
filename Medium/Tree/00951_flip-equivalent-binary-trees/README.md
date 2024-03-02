Problem Name: [Flip Equivalent Binary Trees](https://leetcode.com/problems/flip-equivalent-binary-trees/description/)

Problem #951

Tag: `Tree` `Depth-First Search` `Binary Tree`

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
  bool flipEquiv(TreeNode* root1, TreeNode* root2) {
    if ( root1 == nullptr && root2 == nullptr ) return true;
    if ( root1 == nullptr || root2 == nullptr ) return false;
    if ( root1->val != root2->val ) return false;

    bool left1 = flipEquiv(root1->left, root2->left);
    bool right1 = flipEquiv(root1->right, root2->right);
    bool left2 = flipEquiv(root1->left, root2->right);
    bool right2 = flipEquiv(root1->right, root2->left);

    return (left1 && right1) || (left2 && right2);
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Check if both nodes are <code>nullptr</code>, return <code>true</code></li>
>   <li>Check if any of nodes are <code>nullptr</code>, return <code>false</code></li>
>   <li>Check if both nodes values are not same, return <code>false</code></li>
>   <li>Traverse using four combination</li>
>   <ul>
>     <li><code>flipEquiv(root1->left, root2->left)</code> assign to <code>left1</code></li>
>     <li><code>flipEquiv(root1->right, root2->right)</code> assign to <code>right1</code></li>
>     <li><code>flipEquiv(root1->left, root2->right)</code> assign to <code>left2</code></li>
>     <li><code>flipEquiv(root1->right, root2->left)</code> assign to <code>right2</code></li>
>   </ul>
>   <li>And return <code>(left1 && right1) || (left2 && right2)</li>
> </details>
