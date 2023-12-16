Problem Name: [Minimize Maximum Pair Sum in Array](https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description/)

Problem #1877

Tag: `Array` `Two Pointer` `Greedy` `Sorting`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  int minPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int result = -1, n = nums.size();
    for ( int i = 0; i < n/2; i++ ) {
      result = max(result, nums[i] + nums[n-i-1]);
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Sort</li>
  <li>Gradually compare from first & last value & calculate maximum</li>
</details>
