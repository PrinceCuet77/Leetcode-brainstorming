Problem Name: [Check if All A's Appears Before All B's](https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/)

Problem #2124

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool checkString(string s) {
    bool flag = true;
    for ( char ch : s ) {
      if ( ch == 'b' ) flag = false;
      if ( ch == 'a' && flag == false ) return false;
    }

    return true;
  }
};
```
