Problem Name: [Minimum Amount of Time to Collect Garbage](https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/description/)

Problem #2391

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  int garbageCollection(vector<string>& garbage, vector<int>& travel) {
    int result = garbage[0].size(), g = 0, p = 0, m = 0;
    for ( int i = 1; i < garbage.size(); i++ ) {
      g += travel[i-1];
      p += travel[i-1];
      m += travel[i-1];
      for ( char ch : garbage[i] ) {
        if ( ch == 'G' ) {
          result += g + 1;
          g = 0;
        } else if ( ch == 'P' ) {
          result += p + 1;
          p = 0;
        } else if ( ch == 'M' ) {
          result += m + 1;
          m = 0;
        }
      }
    }
    
    return result;
  }
};
```
