Problem Name: [Excel Sheet Column Number](https://leetcode.com/problems/excel-sheet-column-number/)

Problem #171

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int titleToNumber(string columnTitle) {
    int result = 0;
    for ( char ch : columnTitle ) {
      int position = ch - 'A' + 1;
      result = result * 26 + position;
    }

    return result;
  }
};
```
