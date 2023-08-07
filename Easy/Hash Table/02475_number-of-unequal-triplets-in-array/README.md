Problem Name: [Number of Unequal Triplets in Array](https://leetcode.com/problems/number-of-unequal-triplets-in-array/)

Problem #2475

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int unequalTriplets(vector<int>& nums) {
    unordered_map < int, int > mp; // Fast optimization (Why: order is not required)
    for ( auto n : nums ) mp[n]++;

    int res = 0, left = 0, right = nums.size();
    for ( auto [n, cnt] : mp ) {
        right -= cnt;
        res += left * cnt * right;
        left += cnt;
    }

    return res;
  }
};
```
