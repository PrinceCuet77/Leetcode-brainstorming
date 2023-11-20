Problem Name: [Remove All Occurrences of a Substring](https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/)

Problem #1910

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  string removeOccurrences(string s, string part) {
    for ( int i = 0; i < s.size(); i++ ) {
      if ( i + part.size() - 1  < s.size() && s.substr(i, part.size()) == part ) {
        s.erase(i, part.size());
        i = -1;
      }
    }

    return s;
  }
};
```
