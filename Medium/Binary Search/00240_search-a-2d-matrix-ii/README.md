Problem Name: [Search a 2D Matrix II
](https://leetcode.com/problems/search-a-2d-matrix-ii/)

Problem #240

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(), n = matrix[0].size();
    bool flag = false;
    for ( int i = 0; i < m; i++ ) {
      bool fl = binarySearch(matrix[i], 0, n - 1, target);
      if ( fl ) {
        flag = true;
        break;
      }
    }

    return flag;
  }

  bool binarySearch(vector < int >& num, int low, int high, int target) {
    while ( low <= high ) {
      int mid = low + (high - low) / 2;
      if ( num[mid] == target ) return true;
      else if ( num[mid] > target ) high = mid - 1;
      else low = mid + 1;
    }

    return false;
  }
};
```
