Problem Name: [Determine if String Halves Are Alike](https://leetcode.com/problems/determine-if-string-halves-are-alike/)

Problem #1704

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool halvesAreAlike(string s) {
    int first = 0, second = 0, n = s.size();
    for ( int i = 0; i < n/2; i++ ) {
      if ( isVowel(s[i]) ) first++;
      if ( isVowel(s[n - i - 1]) ) second++;
    }

    if ( first == second ) return true;
    return false;
  }

  bool isVowel(char ch) {
    if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ) return true;
    if ( ch == 'A'  || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ) return true;
    return false;
  }
};
```
