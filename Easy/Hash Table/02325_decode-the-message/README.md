Problem Name: [Decode the Message](https://leetcode.com/problems/decode-the-message/)

Problem #2325

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string decodeMessage(string key, string message) {
    map < char, char > mp;
    char ch = 'a';
    for ( auto k : key ) {
      if ( k >= 'a' && k <= 'z' ) {
        if ( mp[k] == 0 ) {
          mp[k] = ch;
          ch++;
        }
      }
    }

    string result = "";
    for ( auto m : message ) {
      if ( m >= 'a' && m <= 'z' ) {
        result += mp[m];
      } else {
        result += m;
      }
    }

    return result;
  }
};
```
