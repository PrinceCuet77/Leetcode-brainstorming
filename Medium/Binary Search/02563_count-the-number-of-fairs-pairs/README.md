Problem Name: [Count the Number of Fair Pairs](https://leetcode.com/problems/count-the-number-of-fair-pairs/description/)

Problem #2563

Tag: `Binary Search` `Array` `Two Pointer` `Sorting`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  long long countFairPairs(vector<int>& nums, int lower, int upper) {
    sort(nums.begin(), nums.end());

    long long count = 0;
    for ( int i = 0; i < nums.size(); i++ ) {
      auto low = lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]);
      auto high = upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]);

      count += (high - low);
    }

    return count;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Sort the given array</li>
>   <li>Traverse the array and find lower & upper bound for every single element</li>
>   <li>Count the pairs and return it</li>
> </details>
