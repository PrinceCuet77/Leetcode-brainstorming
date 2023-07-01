Problem Name: [Flipping an Image](https://leetcode.com/problems/flipping-an-image/)

Problem #832

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    int n = image.size();

    for ( int i = 0; i < n; i++ ) {
      for ( int j = 0; j < (n + 1) / 2; j++ ) {
        int temp = image[i][j] ? 0 : 1;
        image[i][j] = image[i][n - j - 1] ? 0 : 1;
        image[i][n - j - 1] = temp;
      }
    }

    // for ( auto &row : image ) {
    //   for ( int i = 0; i < (n + 1) / 2; i++ ) {
    //     int temp = row[i] ? 0 : 1;
    //     row[i] = row[n - i - 1] ? 0 : 1;
    //     row[n - i - 1] = temp;
    //   }
    // }

    return image;
  }
};
```
