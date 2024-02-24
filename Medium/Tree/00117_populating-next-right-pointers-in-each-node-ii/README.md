Problem Name: [Populating Next Right Pointers in Each Node II](https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/description/)

Problem #117

Tag: `Tree` `Binary Tree` `Depth-First Search` `Breadth-First Search` `Linked List`

Difficulty: `Medium`

## Cpp

```cpp
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
  Node* connect(Node* root) {
    if ( root == nullptr ) return root;

    queue < Node* > q;
    q.push(root);

    while ( !q.empty() ) {
      vector < Node* > v;

      int sz = q.size();
      for ( int i = 0; i < sz; i++ ) {
        Node* top = q.front();
        q.pop();

        if ( top->left ) {
          q.push(top->left);
          v.push_back(top->left);
        }

        if ( top->right ) {
          q.push(top->right);
          v.push_back(top->right);
        }
      }

      if ( v.size() == 0 ) continue;

      for ( int i = 0; i < v.size() - 1; i++ ) {
        v[i]->next = v[i+1];
      }
    }

    return root;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use Breath-First Search</li>
>   <li>While visiting level-order, join every nodes <code>next</code> to their right node</li>
> </details>
