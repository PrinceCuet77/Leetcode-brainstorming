Problem Name: [Minimum Time Visiting All Points](https://leetcode.com/problems/minimum-time-visiting-all-points/)

Problem #1266

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int n = points.size();
    int x = points[0][0], y = points[0][1];
    int count = 0;

    for ( int i = 1; i < n; i++ ) {
      count += max(abs(points[i][0] - x), abs(points[i][1] - y));

      x = points[i][0];
      y = points[i][1];
    }

    return count;
  }
};
```
