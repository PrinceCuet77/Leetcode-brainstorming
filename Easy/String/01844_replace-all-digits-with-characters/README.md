Problem Name: [Replace All Digits with Characters](https://leetcode.com/problems/replace-all-digits-with-characters/)

Problem #1844

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string replaceDigits(string s) {
    int n = s.size();
    for ( int i = 1; i < n; i +=2 )
      s[i] = s[i-1] + (s[i] - '0');

    return s;
  }
};
```
