Problem Name: [Binary Search Tree Iterator](https://leetcode.com/problems/binary-search-tree-iterator/)

Problem #173

Tag: `Tree` `Binary Search Tree` `Binary Tree` `Iterator` `Stack` `Design`

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
class BSTIterator {
  stack < TreeNode* > st;
  void AllLeftNodes(TreeNode *root) {
    while ( root != nullptr ) {
      st.push(root);
      root = root->left;
    }
  }

public:
  BSTIterator(TreeNode* root) {
    AllLeftNodes(root);
  }

  int next() {
    TreeNode *top = st.top();
    st.pop();
    AllLeftNodes(top->right);
    return top->val;
  }

  bool hasNext() {
    return !st.empty();
  }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
```

> [!NOTE]
>
> <details>
>   <li>Store <code>root</code> & it's all left child in <code>Stack</code></li>
>   <li><code>hasNext()</code> checks <code>stack</code> is empty or not</li>
>   <li><code>next()</code> takes the top element in <code>stack</code> & return it's value & store all the left child of top nodes right child</li>
> </details>
