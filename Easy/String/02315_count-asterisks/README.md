Problem Name: [Count Asterisks](https://leetcode.com/problems/count-asterisks/description/)

Problem #2315

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int countAsterisks(string s) {
    int result = 0;
    bool flag = false;
    for ( char ch : s ) {
      if ( flag == false && ch == '*' ) result++;
      if ( flag == false && ch == '|' ) flag = true;
      else if ( flag == true && ch == '|' ) flag = false;  
    }

    return result;
  }
};
```