Problem Name: [Excel Sheet Column Title](https://leetcode.com/problems/excel-sheet-column-title/description/)

Problem #168

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string convertToTitle(int columnNumber) {
    string result = "";
    while ( columnNumber ) {
      columnNumber--;
      char ch = 'A' + columnNumber % 26;
      result = ch + result;

      columnNumber /= 26;
    }
    
    return result;
  }
};
```