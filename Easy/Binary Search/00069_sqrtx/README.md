Problem Name: [Sqrt(x)](https://leetcode.com/problems/sqrtx/)

Problem #69

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int mySqrt(int x) {
    double low = 0.0, high = (double)x;
    double mid;
    for ( int i = 0; i < 64; i++ ) {
      mid = (low + high) / 2;
      if ( mid * mid > x ) high = mid;
      else low = mid;
    }

    return (int)mid;
  }
};
```
