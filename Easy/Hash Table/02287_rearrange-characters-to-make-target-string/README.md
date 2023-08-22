Problem Name: [Rearrange Characters to Make Target String](https://leetcode.com/problems/rearrange-characters-to-make-target-string/)

Problem #2287

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int rearrangeCharacters(string s, string target) {
    vector < int > store(26, 0);
    unordered_map < int, int > mp;
    for ( auto ch : s ) store[ch - 'a']++;
    for ( auto ch : target ) mp[ch]++;

    int result = INT_MAX;
    for ( auto m : mp ) {
      result = min(result, store[m.first - 'a'] / m.second);
    }

    return result;
  }
};
```
