Problem Name: [Valid Anagram](https://leetcode.com/problems/valid-anagram/)

Problem #242

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool isAnagram(string s, string t) {
    unordered_map < char, int > mp;
    for ( auto ch : s ) mp[ch]++;
    for ( auto ch : t ) mp[ch]--;

    for ( auto m : mp ) {
      if ( m.second ) return false;
    }

    return true;
  }
};
```
