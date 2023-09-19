Problem Name: [Split Strings by Separator](https://leetcode.com/problems/split-strings-by-separator/)

Problem #2788

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
    int n = words.size();
    vector < string > result;
    for ( int i = 0; i < n; i++ ) {
      string str = "";
      for ( int j = 0; j < words[i].size(); j++ ) {
        char ch = words[i][j];
        if ( j == 0 && ch == separator ) continue;

        if ( j == words[i].size() - 1 && ch != separator ) {
          str += ch;
          result.push_back(str);
          str = "";
          break;
        }

        if ( ch == separator ) {
          if ( str != "" ) {
            result.push_back(str);
            str = "";
          }
        } else {
          str += ch;
        }
      }
    }

    return result;
  }
};
```
