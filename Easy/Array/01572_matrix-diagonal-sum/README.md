Problem Name: [Matrix Diagonal Sum](https://leetcode.com/problems/matrix-diagonal-sum/)

Problem #1572

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int diagonalSum(vector<vector<int>>& mat) {
    int result = 0;

    int n = mat.size();
    for ( int i = 0; i < mat.size(); i++ ) {
      for ( int j = 0; j < mat[i].size(); j++ ) {
        if (i == j || j == n - 1) {
          result += mat[i][j];
        }
      }
      n--;
    }

    return result;
  }
};
```

Javascript:

```js
/**
 * @param {number[][]} mat
 * @return {number}
 */
var diagonalSum = function (mat) {
  let result = 0

  let n = mat.length
  for (let i = 0; i < mat.length; i++) {
    for (let j = 0; j < mat[i].length; j++) {
      if (i == j || j == n - 1) {
        result += mat[i][j]
      }
    }
    n--
  }

  return result
}
```
