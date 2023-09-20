Problem Name: [Split a String in Balanced Strings](https://leetcode.com/problems/split-a-string-in-balanced-strings/)

Problem #1221

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int balancedStringSplit(string s) {
    int balance = 0, result = 0;
    for ( auto ch : s ) {
      if ( ch == 'R' ) balance++;
      else if ( ch == 'L' ) balance--;

      if ( balance == 0 ) result++;
    }

    return result;
  }
};
```
