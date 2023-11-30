Problem Name: [Minimum Add to Make Parentheses Valid](https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description/)

Problem #921

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  int minAddToMakeValid(string s) {
    stack < char > st;
    int cnt = 0;
    for ( char ch : s ) {
      if ( ch == '(' ) st.push(ch);
      else if ( ch == ')' && !st.empty() ) st.pop();
      else cnt++;
    }

    return st.size() + cnt;
  }
};
```
