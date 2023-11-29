Problem Name: [Sum of Values at Indices With K Set Bits](https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/)

Problem #2859

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int sumIndicesWithKSetBits(vector<int>& nums, int k) {
    int result = 0;
    for ( int i = 0; i < nums.size(); i++ ) {
      int one = 0, num = i;
      while ( num ) {
        one += num & 1;
        num >>= 1;
      }

      result += one == k ? nums[i] : 0;
    }

    return result;
  }
};
```
