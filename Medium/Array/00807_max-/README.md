Problem Name: [Max Increase to Keep City Skyline](https://leetcode.com/problems/max-increase-to-keep-city-skyline/)

Problem #807

Tag: `Array` `Greedy` `Matrix`

Difficulty: `Medium`

## Note

- Find max of columns & rows
- Find difference between original value & min of column & row
- Sum the difference

## Cpp

```cpp
class Solution {
public:
  int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
    int n = grid.size(), result = 0;
    vector < int > row(n, 0), col(n, 0);
    for ( int r = 0; r < n; r++ ) {
      for ( int c = 0; c < n; c++ ) {
        row[r] = max(row[r], grid[r][c]);
        col[c] = max(col[c], grid[r][c]);
      }
    }

    for ( int r = 0; r < n; r++ ) {
      for ( int c = 0; c < n; c++ ) {
        result += min(row[r], col[c]) - grid[r][c];
      }
    }

    return result;
  }
};
```
