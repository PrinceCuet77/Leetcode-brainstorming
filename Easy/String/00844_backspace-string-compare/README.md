Problem Name: [Backspace String Compare](https://leetcode.com/problems/backspace-string-compare/description/)

Problem #844

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool backspaceCompare(string s, string t) {
    vector < char > s1, t1;
    for ( char ch : s ) {
      if ( ch == '#' ) {
        if ( s1.size() >= 1 ) s1.pop_back();
      }
      else s1.push_back(ch);
    }

    for ( char ch : t ) {
      if ( ch == '#' ) {
        if ( t1.size() >= 1 ) t1.pop_back();
      }
      else t1.push_back(ch);
    }

    if ( s1 == t1 ) return true;

    return false;
  }
};
```
