Problem Name: [Maximum Sum With Exactly K Elements](https://leetcode.com/problems/maximum-sum-with-exactly-k-elements/)

Problem #2656

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int maximizeSum(vector<int>& nums, int k) {
    int maxValue = INT_MIN;
    for ( auto num : nums ) 
      maxValue = maxValue < num ? num : maxValue;

    return  maxValue * k + ((k - 1) * k) / 2;
  }
};
```