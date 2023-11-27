Problem Name: [Minimum Number of Steps to Make Two Strings Anagram](https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/)

Problem #1347

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  int minSteps(string s, string t) {
    unordered_map < char, int > mp;
    for ( auto ch : s ) mp[ch]++;
    for ( auto ch : t ) mp[ch]--;

    int result = 0;
    for ( auto m : mp ) {
      result += abs(m.second);
    }

    return result/2;
  }
};
```
