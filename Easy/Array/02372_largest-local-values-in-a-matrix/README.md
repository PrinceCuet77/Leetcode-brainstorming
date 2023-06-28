Problem Name: [Largest Local Values in a Matrix](https://leetcode.com/problems/largest-local-values-in-a-matrix/)

Problem #2373

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
    int n = grid.size();
    vector < vector < int > > result(n - 2, vector < int > (n - 2));

    for ( int i = 0; i < n - 2; i++ ) {
      for ( int j = 0; j < n - 2; j++ ) {
        int maxValue = INT_MIN;

        maxValue = max({maxValue, grid[i][j], grid[i][j+1], grid[i][j+2]});
        maxValue = max({maxValue, grid[i+1][j], grid[i+1][j+1], grid[i+1][j+2]});
        maxValue = max({maxValue, grid[i+2][j], grid[i+2][j+1], grid[i+2][j+2]});

        result[i][j] = maxValue;
      }
    }

    return result;
  }
};
```

Javascript:

```js
/**
 * @param {number[][]} grid
 * @return {number[][]}
 */
var largestLocal = function (grid) {
  let n = grid.length
  let result = []

  for (let i = 0; i < n - 2; i++) {
    result[i] = []
    for (let j = 0; j < n - 2; j++) {
      let maxValue = -1

      maxValue = Math.max(maxValue, grid[i][j], grid[i][j + 1], grid[i][j + 2])
      maxValue = Math.max(
        maxValue,
        grid[i + 1][j],
        grid[i + 1][j + 1],
        grid[i + 1][j + 2]
      )
      maxValue = Math.max(
        maxValue,
        grid[i + 2][j],
        grid[i + 2][j + 1],
        grid[i + 2][j + 2]
      )

      result[i][j] = maxValue
    }
  }

  return result
}
```
