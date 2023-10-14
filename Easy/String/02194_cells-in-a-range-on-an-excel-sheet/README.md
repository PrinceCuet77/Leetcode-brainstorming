Problem Name: [Cells in a Range on an Excel Sheet](https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/description/)

Problem #2194

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<string> cellsInRange(string s) {
    char col1 = s[0], col2 = s[3];
    int row1 = s[1] - '0', row2 = s[4] - '0';
    vector < string > result;
    for ( char ch = col1; ch <= col2; ch++ ) {
      for ( int i = row1; i <= row2; i++ ) {
        result.push_back(ch + to_string(i));
      }
    }

    return result;
  }
};
```
