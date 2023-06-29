Problem Name: [Find the Highest Altitude](https://leetcode.com/problems/find-the-highest-altitude/)

Problem #1732

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int largestAltitude(vector<int>& gain) {
    int highest = 0, start = 0;
    for ( auto value : gain ) {
      start += value;
      highest = highest < start ? start : highest;
    }

    return highest;
  }
};
```
