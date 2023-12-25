Problem Name: [Equal Row and Column Pairs](https://leetcode.com/problems/equal-row-and-column-pairs/description/)

Problem #2352

Tag: `Array` `Hash Table` `Matrix` `Simulation`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  int equalPairs(vector<vector<int>>& grid) {
    int n = grid.size(), result = 0;
    vector < vector < int > > mat = grid;

    for ( int i = 0; i < n; i++ ) {
      for ( int j = i; j < n; j++ ) {
        swap(grid[i][j], grid[j][i]);
      }
    }

    for ( int i = 0; i < n; i++ ) {
      for ( int j = 0; j < n; j++ ) {
        if ( grid[i] == mat[j] ) result++;
      }
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Take a extra <code>vector</code></li>
  <li>Swap elements of any <code>vector</code></li>
  <li>If row & column match, increase result by <code>1</code></li>
</details>
