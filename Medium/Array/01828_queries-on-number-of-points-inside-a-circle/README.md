Problem Name: [Queries on Number of Points Inside a Circle](https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/)

Problem #1828

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
    vector < int > result;
    for ( auto query : queries ) {
      int x = query[0], y = query[1], r = query[2], count = 0;
      for ( auto point : points ) {
        int a = point[0], b = point[1];
        int d = (a - x) * (a - x) + (b - y) * (b - y);
        if ( d <= r * r ) count++;
      }
      result.push_back(count);
    }

    return result;
  }
};
```
