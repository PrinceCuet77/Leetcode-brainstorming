Problem Name: [Find Subarrays With Equal Sum](https://leetcode.com/problems/find-subarrays-with-equal-sum/)

Problem #2395

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool findSubarrays(vector<int>& nums) {
    unordered_map < int, int > mp;
    int n = nums.size();
    for ( int i = 0; i < n - 1; i++ ) {
      int sum = nums[i] + nums[i+1];
      mp[sum]++;

      if ( mp[sum] >= 2 ) return true;
    }

    return false;
  }
};
```
