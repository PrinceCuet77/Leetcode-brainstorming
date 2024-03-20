Problem Name: [Kth Missing Positive Number](https://leetcode.com/problems/kth-missing-positive-number/)

Problem #1539

Tag: `Binary Search` `Array`

Difficulty: `Easy`

## Cpp

```cpp
class Solution {
public:
  int findKthPositive(vector<int>& arr, int k) {
    int i = 1, idx = 0, missing = 0;
    while ( missing != k ) {
      if ( idx < arr.size() && i == arr[idx] ) idx++;
      else missing++;

      i++;
    }

    return i-1;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Traverse from 1 & tracking which number is missing</li>
>   <li>Total missing number is equal to k then stop scanning & return <code>i-1</code></li>
> </details>
