Problem Name: [Determine Color of a Chessboard Square](https://leetcode.com/problems/determine-color-of-a-chessboard-square/description/)

Problem #1812

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool squareIsWhite(string coordinates) {
    int row = coordinates[0] - 'a';
    int col = coordinates[1] - '0';

    if ( (row % 2 == 0 && col % 2 == 0) || (row % 2 != 0 && col % 2 != 0) ) return true;
    else return false;
  }
};

```
