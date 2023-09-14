Problem Name: [Count Lattice Points Inside a Circle](https://leetcode.com/problems/count-lattice-points-inside-a-circle/)

Problem #2249

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  int countLatticePoints(vector<vector<int>>& circles) {
    int count = 0;
    set < pair < int , int > > st;
    for ( auto circle : circles ) {
      int x = circle[0], y = circle[1], r = circle[2];
      for ( int i = x - r; i <= x + r; i++ ) {
        for ( int j = y - r; j <= y + r; j++ ) {
          if ( st.find({i, j}) == st.end() ) {
            if ( insideACircle(i, j, x, y, r) ) {
              st.insert({i, j});
              count++;
            }
          }
        }
      }
    }

    return count;
  }


  bool insideACircle(int a, int b, int x, int y, int r) {
    int d = (a - x) * (a - x) + (b - y) * (b - y);
    return d <= r * r ? true : false;
  }
};

```
