Problem Name: [To Lower Case](https://leetcode.com/problems/to-lower-case/description/)

Problem #709

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string toLowerCase(string s) {
    int n = s.size();
    for ( int i = 0; i < n; i++ ) {
      if ( s[i] >= 'A' && s[i] <= 'Z' ) s[i] = s[i] - 'A' + 'a';
    }

    return s;
  }
};
```