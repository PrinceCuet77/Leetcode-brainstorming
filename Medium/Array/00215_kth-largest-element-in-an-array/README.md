Problem Name: [Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)

Problem #215

Tag: `Array` `Divide and Conquer` `Sorting` `Heap (Priority Queue)` `Quickselect`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  int findKthLargest(vector<int>& nums, int k) {
    priority_queue < int > pq;
    for ( auto num : nums ) {
      pq.push(num);
    }

    int result, i = 0;
    while ( !pq.empty() ) {
      i++;
      int val = pq.top();
      pq.pop();
      if ( i == k ) {
        result = val;
        break;
      }
    }

    return result;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Store all the elements in the min-heap</li>
>   <li>While storing the element, if found out <code>pq.size() > k</code>, remove from the top of the min-heap</li>
>   <li>After traversal, return the top of the min-heap</li>
> </details>
