Problem Name: [Kth Largest Element in a Stream](https://leetcode.com/problems/kth-largest-element-in-a-stream/description/)

Problem #703

Tag: `Tree` `Design` `Binary Search Tree` `Heap (Priority Queue)` `Binary Tree` `Data Stream`

Difficulty: `Easy`

## Cpp

```cpp
class KthLargest {
  priority_queue < int, vector < int >, greater < int > > pq;
  int range = 0;

  void findKthElement(int val) {
    pq.push(val);
    if ( pq.size() > range ) pq.pop();
  }

public:
  KthLargest(int k, vector<int>& nums) {
    range = k;
    for ( int num : nums ) {
      findKthElement(num);
    }
  }

  int add(int val) {
    findKthElement(val);
    return pq.top();
  }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
```

> [!NOTE]
>
> <details>
>   <li>Store all the elements in the min-heap</li>
>   <li>While storing the element, if found out <code>pq.size() > range</code>, remove from the top of the min-heap</li>
>   <li>After traversal, return the top of the min-heap</li>
> </details>
