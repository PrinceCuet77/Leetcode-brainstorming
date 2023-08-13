Problem Name: [Count Distinct Numbers on Board](https://leetcode.com/problems/count-distinct-numbers-on-board/)

Problem #2549

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int distinctIntegers(int n) {
    if ( n == 1 ) return n;
    else return n - 1;
  }
};
```
