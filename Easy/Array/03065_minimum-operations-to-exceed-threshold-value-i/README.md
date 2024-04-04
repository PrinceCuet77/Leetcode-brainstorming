Problem Name: [Minimum Operations to Exceed Threshold Value I](https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/description/)

Problem #3065

Tag: `Array`

Difficulty: `Easy`

## Cpp

```cpp
class Solution {
public:
  int minOperations(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());

    int result = 0;
    for ( int i = 0; i < nums.size(); i++ ) {
      if ( nums[i] >= k ) break;
      result++;
    }

    return result;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Sort the array & find out the total element less than <code>k</code></li>
> </details>