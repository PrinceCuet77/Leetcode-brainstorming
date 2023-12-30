Problem Name: [Partition Array Such That Maximum Difference Is K](https://leetcode.com/problems/partition-array-such-that-maximum-difference-is-k/description/)

Problem #2294

Tag: `Array` `Greedy` `Sorting`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  int partitionArray(vector<int>& nums, int k) {
    priority_queue < int > pq;
    for ( int num : nums ) pq.push(num);

    int pivot = -1, count = 0;
    while ( pq.size() ) {
      int top = pq.top();
      if ( pivot == -1 ) {
        count++;
        pivot = top;
      } else {
        if ( pivot - top > k ) {
          count++;
          pivot = top;
        }
      }

      pq.pop();
    }

    return count;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Store <code>nums</code> to <code>priority_queue</code></li>
  <li>Increase <code>count</code> by <code>1</code> only for first element of <code>priority_queue</code> & <code>pivot - top > k</code></li>
  <li>Mension, <code>pivot</code> is last sequence's minimum value & <code>top</code> is the current value of <code>priority_queue</code></li>
</details>
