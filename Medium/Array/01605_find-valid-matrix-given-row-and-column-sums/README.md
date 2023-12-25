Problem Name: [Find Valid Matrix Given Row and Column Sums](https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums/description/)

Problem #1605

Tag: `Array` `Greedy` `Matrix`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
    int n = rowSum.size(), m = colSum.size();
    vector < vector < int > > result(n, vector < int > (m, 0));
    for ( int i = 0; i < n; i++ ) {
      for ( int j = 0; j < m; j++ ) {
        int val = min(rowSum[i], colSum[j]);
        result[i][j] = val;

        rowSum[i] -= val;
        colSum[j] -= val;
      }
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Find minimum between <code>rowSum</code> & <code>colSum</code> of all the indexes</li>
  <li>Store that minimum value of corresponding <code>[i][j]</code> indexes</li>
  <li>Remove that minimum value from <code>rowSum</code> & <code>colSum</code></li>
</details>
