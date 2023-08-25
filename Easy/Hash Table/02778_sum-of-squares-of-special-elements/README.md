Problem Name: [Sum of Squares of Special Elements](https://leetcode.com/problems/sum-of-squares-of-special-elements/)

Problem #2778

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int sumOfSquares(vector<int>& nums) {
    int result = 0, n = nums.size();
    for ( int i = 0; i < n; i++ ) {
      if ( n % (i+1) == 0 ) result += nums[i] * nums[i];
    }

    return result;
  }
};
```
