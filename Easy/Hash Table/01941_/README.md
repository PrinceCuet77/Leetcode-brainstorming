Problem Name: [Check if All Characters Have Equal Number of Occurrences](https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/)

Problem #1941

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool areOccurrencesEqual(string s) {
    int count = 0, n = s.size();
    map < char, int > mp;
    for ( int i = 0; i < n; i++ ) {
      mp[s[i]]++;
      count = max(count, mp[s[i]]);
    }

    for ( auto m : mp ) {
      if ( m.second != count ) return false;
    }

    return true;
  }
};
```
