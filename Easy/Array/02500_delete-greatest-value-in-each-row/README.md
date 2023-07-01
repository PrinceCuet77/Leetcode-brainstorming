Problem Name: [Delete Greatest Value in Each Row](https://leetcode.com/problems/delete-greatest-value-in-each-row/)

Problem #2500

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int deleteGreatestValue(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int count = 0;

    for ( int i = 0; i < m; i++ ) {
      sort(grid[i].begin(), grid[i].end());
    }

    for ( int i = 0; i < n; i++ ) {
      int maxValue = INT_MIN;
      for ( int j = 0; j < m; j++ ) {
        maxValue = maxValue < grid[j][i] ? grid[j][i] : maxValue;
      }

      count += maxValue;
    }

    return count;
  }
};
```
