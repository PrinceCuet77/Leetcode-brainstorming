Problem Name: [Shortest Distance to a Character](https://leetcode.com/problems/shortest-distance-to-a-character/)

Problem #821

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> shortestToChar(string s, char c) {
    vector < int > result, position;
    for ( int i = 0; i < s.size(); i++ ) {
      if ( s[i] == c ) position.push_back(i);
    }

    for ( int i = 0; i < s.size(); i++ ) {
      int minDistance = INT_MAX;
      for ( int j = 0; j < position.size(); j++ ) {
        minDistance = min(minDistance, abs(i - position[j]));
      }

      result.push_back(minDistance);
    }

    return result;
  }
};
```
