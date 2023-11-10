Problem Name: [Calculate Digit Sum of a String](https://leetcode.com/problems/calculate-digit-sum-of-a-string/description/)

Problem #2243

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string digitSum(string s, int k) {
    string longTemp = "";
    while ( s.size() > k ) {
      string shortTemp = "";
      for ( int i = 0; i < s.size(); i++ ) {
        shortTemp += s[i];
        if ( shortTemp.size() == k || i+1 == s.size() ) {
          longTemp += count(shortTemp);
          shortTemp = "";
        }
      }
      s = longTemp;
      longTemp = "";
    }

    return s;
  }

  string count(string str) {
    int total = 0;
    for ( int i = 0; i < str.size(); i++ ) {
      total += str[i] - '0';
    }

    return to_string(total);
  }
};
```
