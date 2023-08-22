Problem Name: [Path Crossing](https://leetcode.com/problems/path-crossing/)

Problem #1496

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool isPathCrossing(string path) {
    set < pair < int, int > > st;
    st.insert({0, 0});
    int x = 0, y = 0;
    for ( auto ch : path ) {
      if ( ch == 'N' ) y += 1;
      else if ( ch == 'E' ) x += 1;
      else if ( ch == 'S' ) y -= 1;
      else if ( ch == 'W' ) x -= 1;

      if ( st.find({x, y}) == st.end() ) st.insert({x, y});
      else return true;
    }

    return false;
  }
};
```
