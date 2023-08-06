Problem Name: [First Letter to Appear Twice](https://leetcode.com/problems/first-letter-to-appear-twice/)

Problem #2351

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  char repeatedCharacter(string s) {
    map < char, int > mp;
    int n = s.size();

    char result;
    for ( int i = 0; i < n; i++ ) {
      mp[s[i]]++;

      if ( mp[s[i]] == 2 ) {
        result = s[i];
        break;
      }
    }

    return result;
  }
};
```
