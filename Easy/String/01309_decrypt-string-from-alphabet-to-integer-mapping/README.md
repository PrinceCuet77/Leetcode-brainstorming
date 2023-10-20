Problem Name: [Decrypt String from Alphabet to Integer Mapping](https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/description/)

Problem #1309

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string freqAlphabets(string s) {
    string result = "";
    for ( int i = 0; i < s.size(); i++ ) {
      if ( i+2 < s.size() && s[i+2] == '#' ) {
        int val1 = s[i] - '0';
        int val2 = s[i+1] - '0';
        int value = val1 * 10 + val2;
        result += ('a' + value - 1);
        i += 2;
      } else {
        int val = s[i] - '0';
        result += ('a' + val - 1);
      }
    }

    return result;
  }
};
```
