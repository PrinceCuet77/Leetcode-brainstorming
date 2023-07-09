Problem Name: [Minimum Operations to Make the Array Increasing](https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/)

Problem #1827

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int minOperations(vector<int>& nums) {
    int result = 0, point = nums[0], n = nums.size();
    
    for ( int i = 1; i < n; i++ ) {
      if ( point >= nums[i] ) {
        point++;
        result += point - nums[i];
      } else {
        point = nums[i];
      }
    }

    return result;
  }
};
```
