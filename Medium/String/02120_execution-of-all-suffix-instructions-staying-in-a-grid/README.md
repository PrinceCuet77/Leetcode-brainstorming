Problem Name: [Execution of All Suffix Instructions Staying in a Grid](https://leetcode.com/problems/execution-of-all-suffix-instructions-staying-in-a-grid/description/)

Problem #2120

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
    vector < int > answer;
    for ( int i = 0; i < s.size(); i++ ) {
      int count = 0, x = startPos[0], y = startPos[1];
      for ( int j = i; j < s.size(); j++ ) {
        if ( s[j] == 'R' ) y++;
        else if ( s[j] == 'L' ) y--;
        else if ( s[j] == 'U' ) x--;
        else x++;

        if ( (x >= 0 && x <= n-1) && (y >= 0 && y <= n-1) ) count++;
        else break;
      }
      
      answer.push_back(count);
    }

    return answer;
  }
};
```
