Problem Name: [Reverse Only Letters](https://leetcode.com/problems/reverse-only-letters/)

Problem #917

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string reverseOnlyLetters(string s) {
    int first = 0, last = s.size() - 1;
    while ( first <= last ) {
      if ( isAlphabet(s[first]) && isAlphabet(s[last]) ) {
        swap(s[first], s[last]);

        first++;
        last--;
      } else {
        if ( isAlphabet(s[first]) == false ) first++;
        if ( isAlphabet(s[last]) == false ) last--;
      }
    }

    return s;
  }

  bool isAlphabet(char ch) {
    if ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ) return true;
    return false;
  }
};
```
