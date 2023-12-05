Problem Name: [Max Increase to Keep City Skyline](https://leetcode.com/problems/max-increase-to-keep-city-skyline/)

Problem #807

Tag: `Array` `Greedy` `Matrix`

Difficulty: `Medium`

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

<details>
  <summary>Note</summary>
  <li>Find max of columns & rows</li>
  <li>Find difference between original value & min of column & row</li>
  <li>Sum the difference</li>
</details>
