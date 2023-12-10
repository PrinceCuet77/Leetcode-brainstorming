Problem Name: [Widest Vertical Area Between Two Points Containing No Points](https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/description/)

Problem #1637

Tag: `Array` `Sorting`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  int maxWidthOfVerticalArea(vector<vector<int>>& points) {
    sort(points.begin(), points.end());

    int result = -1;
    for ( int i = 0; i < points.size() - 1; i++ ) {
      result = max(result, points[i+1][0] - points[i][0]);
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Sort the <code>points</code></li>
  <li>Ignore the <code>y-axis</code> as  an area of fixed-width extending infinitely along the <code>y-axis</code></li>
  <li>Find maximum regarding <code>x-axis</code></li>
</details>
