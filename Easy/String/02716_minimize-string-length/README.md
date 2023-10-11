Problem Name: [Minimize String Length](https://leetcode.com/problems/minimize-string-length/)

Problem #2716

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int minimizedStringLength(string s) {
    int n = s.size();
    string result = "";
    result += s[0];
    for ( int i = 1; i < n; i++ ) {
      if ( s[i] != s[i-1] ) {
        if ( result.find(s[i]) > n ) result += s[i];
        if ( result.find(s[i-1]) > n ) result += s[i-1];
      }
    }

    return result.size();
  }
};
```
