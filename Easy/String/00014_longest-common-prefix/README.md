Problem Name: [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)

Problem #14

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string longestCommonPrefix(vector<string>& strs) {
    string pivot = strs[0];
    for ( int i = 1; i < strs.size(); i++ ) {
      string temp = "";
      for ( int j = 0; j < min(strs[i].size(), pivot.size()); j++ ) {
        if ( pivot[j] == strs[i][j] ) temp += pivot[j];
        else break;
      }
      pivot = temp;
    }

    return pivot;
  }
};
```
