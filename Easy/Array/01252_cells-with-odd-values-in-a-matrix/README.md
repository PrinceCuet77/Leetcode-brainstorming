Problem Name: [Cells with Odd Values in a Matrix](https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/)

Problem #1252

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int oddCells(int m, int n, vector<vector<int>>& indices) {
    vector<vector<int>> result(m , vector<int> (n, 0));
    
    for ( auto index : indices ) {
      int row = index[0];
      int col = index[1];

      // Increase all the elements of specific row
      for ( int i = 0; i < n; i++ ) result[row][i]++;

      // Increase all the elements of specific col
      for ( int i = 0; i < m; i++ ) result[i][col]++;
    }

    int count = 0;
    for ( int i = 0; i < m; i++ )
      for ( int j = 0; j < n; j++ )
        if ( result[i][j] % 2 ) count++;
    
    return count;
  }
};
```
