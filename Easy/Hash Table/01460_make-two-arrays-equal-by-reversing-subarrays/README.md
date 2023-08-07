Problem Name: [Make Two Arrays Equal by Reversing Subarrays](https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/)

Problem #1460

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool canBeEqual(vector<int>& target, vector<int>& arr) {
    map < int, int > mp;
    for ( auto n : arr ) mp[n]++;

    for ( auto n : target ) {
      if ( mp[n] == 0 ) return false;

      mp[n]--;
    }

    for ( auto m : mp ) {
      if ( m.second != 0 ) return false;
    }

    return true;
  }
};
```
