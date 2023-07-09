Problem Name: [Maximum Count of Positive Integer and Negative Integer](https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/)

Problem #2529

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int maximumCount(vector<int>& nums) {
    int n = nums.size();

    int nve = lowerBound(nums, 0, n - 1, 0);
    int pve = n - lowerBound(nums, 0, n - 1, 1);

    return max(nve, pve);
  }

  int lowerBound(vector < int >& nums, int low, int high, int target) {
    while ( low <= high ) {
      int mid = low + (high - low) / 2;
      if ( nums[mid] >= target ) high = mid - 1;
      else low = mid + 1;
    }

    return low;
  }
};
```
