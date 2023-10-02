Problem Name: [Remove Outermost Parentheses](https://leetcode.com/problems/remove-outermost-parentheses/description/)

Problem #1021

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string removeOuterParentheses(string s) {
    int count = 0;
    string result = "", str = "";
    for ( char ch : s ) {
      if ( ch == '(' ) {
        if ( count != 0 ) str += ch;
        count++;
      } else if ( ch == ')' ) {
        if ( count != 1 ) str += ch;
        else {
          result += str;
          str = "";
        }
        count--;
      }
    }

    return result;
  }
};
```