Problem Name: [Substrings of Size Three with Distinct Characters](https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/)

Problem #1876

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int countGoodSubstrings(string s) {
    int n = s.size(), count = 0;
    for ( int i = 0; i < n - 2; i++ ) {
      map < char, int > mp;
      bool flag = true;
      for ( int j = i; j < i + 3; j++ ) {
        mp[s[j]]++;

        if ( mp[s[j]] > 1 ) flag = false;
      }

      if ( flag ) count++;
    }

    return count;
  }
};
```
