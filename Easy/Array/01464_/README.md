Problem Name: [Maximum Product of Two Elements in an Array](https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/)

Problem #1464

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int maxProduct(vector<int>& nums) {
    int firstMax = INT_MIN, secondMax = INT_MIN;

    for ( auto num : nums ) {
      if ( firstMax < num ) {
        secondMax = firstMax;
        firstMax = num;
      } else if ( secondMax < num ) {
        secondMax = num;
      }
    }

    return (firstMax - 1) * (secondMax - 1);
  }
};
```
