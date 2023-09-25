Problem Name: [Goal Parser Interpretation](https://leetcode.com/problems/goal-parser-interpretation/)

Problem #1678

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string interpret(string command) {
    string result = "";
    int n = command.size();
    for ( int i = 0; i < n; i++ ) {
      if ( command[i] == 'G' ) result += command[i];
      else if ( command[i] == '(' && command[i+1] == ')' ) {
        result += "o";
        i++;
      } else if ( command[i] == '(' && command[i+1] == 'a' ) {
        result += "al";
        i += 3;
      }
    }

    return result;
  }
};
```
