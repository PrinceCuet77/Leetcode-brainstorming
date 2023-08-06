Problem Name: [Check Whether Two Strings are Almost Equivalent](https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/)

Problem #2068

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool checkAlmostEquivalent(string word1, string word2) {
    unordered_map < char, int > mp;
    for ( auto ch : word1 ) mp[ch]++;
    for ( auto ch : word2 ) mp[ch]--;

    for ( auto m : mp ) {
      if ( m.second > 3 || m.second < -3 ) return false;
    }

    return true;
  }
};
```
