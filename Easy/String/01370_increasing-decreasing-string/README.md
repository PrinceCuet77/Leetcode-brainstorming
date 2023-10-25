Problem Name: [Increasing Decreasing String](https://leetcode.com/problems/increasing-decreasing-string/description/)

Problem #1370

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string sortString(string s) {
    map < char, int > mp;
    for ( char ch : s ) mp[ch]++;

    string result = "";
    int count = 0;
    while ( 1 ) {
      for ( auto it = mp.begin(); it != mp.end(); it++ ) {
        if ( it->second ) {
          result += it->first;
          it->second--;
        } else count++;
      }

      if ( result.size() == s.size() ) break;

      for ( auto it = mp.rbegin(); it != mp.rend(); it++ ) {
        if ( it->second ) {
          result += it->first;
          it->second--;
        } else count++;
      }

      if ( result.size() == s.size() ) break;
    }

    return result;
  }
};
```
