Problem Name: [Difference Between Ones and Zeros in Row and Column](https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/description/)

Problem #2482

Tag: `Array` `Matrix` `Simulation`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
    int m = grid.size(), n = grid[0].size();
    vector < int > oneRow(m, 0), oneCol(n, 0);
    for ( int i = 0; i < m; i++ ) {
      for ( int j = 0; j < n; j++ ) {
        oneRow[i] += grid[i][j];
        oneCol[j] += grid[i][j];
      }
    }

    vector < vector < int > > result(m, vector < int > (n, 0));
    for ( int i = 0; i < m; i++ ) {
      for ( int j = 0; j < n; j++ ) {
        result[i][j] = oneRow[i] + oneCol[j] - (m - oneRow[i]) - (n - oneCol[j]);
      }
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Track ones in all rows & cols</li>
  <li>Calculate <code>diff</code> accordingly</li>
</details>
