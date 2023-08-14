Problem Name: [Find the Difference](https://leetcode.com/problems/find-the-difference/)

Problem #389

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  char findTheDifference(string s, string t) {
    int result = 0, n = s.size();
    for ( int i = 0; i < n; i++ ) {
      result -= s[i];
      result += t[i];
    }
    result += t[n];
    return result;
  }
};
```
