Problem Name: [Check Distances Between Same Letters](https://leetcode.com/problems/check-distances-between-same-letters/)

Problem #2399

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool checkDistances(string s, vector<int>& distance) {
    map < char, int > mp;
    int n = s.size();
    for ( int i = 0; i < n; i++ ) {
      if ( mp.find(s[i]) == mp.end() ) {
        mp[s[i]] = i;
      } else {
        mp[s[i]] = i - mp[s[i]] - 1;
        if ( mp[s[i]] != distance[s[i]-'a'] ) return false;
      }
    }

    return true;
  }
};
```
