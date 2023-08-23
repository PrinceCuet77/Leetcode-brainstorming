Problem Name: [Longest Palindrome](https://leetcode.com/problems/longest-palindrome/)

Problem #409

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int longestPalindrome(string s) {
    int oddCount = 0;
    unordered_map < char, int > mp;
    for ( auto ch : s ) {
      mp[ch]++;
      if ( mp[ch] % 2 == 0 ) oddCount--;
      else oddCount++;
    }

    if ( oddCount > 1 ) return s.size() - oddCount + 1;
    else return s.size();
  }
};
```
