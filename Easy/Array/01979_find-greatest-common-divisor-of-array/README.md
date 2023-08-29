Problem Name: [Find Greatest Common Divisor of Array](https://leetcode.com/problems/find-greatest-common-divisor-of-array/)

Problem #1979

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int findGCD(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    return __gcd(nums[0], nums[nums.size()-1]);
  }
};
```
