Problem Name: [First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/)

Problem #387

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int firstUniqChar(string s) {
    vector < int > result(26, 0);
    for ( auto ch : s ) result[ch - 'a']++;

    for ( int i = 0; i < s.size(); i++ ) {
      if ( result[s[i] - 'a'] == 1 ) return i;
    }

    return -1;
  }
};
```
