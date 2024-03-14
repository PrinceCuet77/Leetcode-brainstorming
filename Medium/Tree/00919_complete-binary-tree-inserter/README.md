Problem Name: [Complete Binary Tree Inserter](https://leetcode.com/problems/complete-binary-tree-inserter/description/)

Problem #919

Tag: `Tree` `Breadth-First Search` `Design` `Binary Tree`

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
class CBTInserter {
  TreeNode *head = nullptr;

public:
  CBTInserter(TreeNode* root) {
    head = root;
  }

  int insert(int val) {
    queue < TreeNode* > q;
    q.push(head);

    TreeNode* top = nullptr;
    while ( !q.empty() ) {
      top = q.front();
      q.pop();

      if ( top->left == nullptr ) {
        top->left = new TreeNode(val);
        break;
      }

      if ( top->right == nullptr ) {
        top->right = new TreeNode(val);
        break;
      }

      if ( top->left ) q.push(top->left);
      if ( top->right ) q.push(top->right);
    }

    return top->val;
  }

  TreeNode* get_root() {
    return head;
  }
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(val);
 * TreeNode* param_2 = obj->get_root();
 */
```

> [!NOTE]
>
> <details>
>   <li>For <code>CBTInserter()</code>, assign <code>root</code> to a global variable <code>head</code></li>
>   <li>For <code>get_root()</code>, return <code>head</code></li>
>   <li>For <code>insert()</code>, use breadth-first search</li>
>   <li>If left node is <code>nullptr</code>, create a new node & link to left</li>
>   <li>If right node is <code>nullptr</code>, create a new node & link to right</li>
> </details>
