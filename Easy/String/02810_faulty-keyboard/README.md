Problem Name: [Faulty Keyboard](https://leetcode.com/problems/faulty-keyboard/description/)

Problem #2810

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string finalString(string s) {
    string result = "";
    for ( auto ch : s ) {
      if ( ch == 'i' ) reverse(result.begin(), result.end());
      else result += ch;
    }

    return result;
  }
};
```
