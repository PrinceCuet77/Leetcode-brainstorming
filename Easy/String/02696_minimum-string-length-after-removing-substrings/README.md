Problem Name: [Minimum String Length After Removing Substrings](https://leetcode.com/problems/minimum-string-length-after-removing-substrings/)

Problem #2696

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int minLength(string s) {
    stack < char > st;
    for ( char ch : s ) {
      if ( st.size() && ch == 'B' && st.top() == 'A' ) st.pop();
      else if ( st.size() && ch == 'D' && st.top() == 'C' ) st.pop();
      else st.push(ch);
    }

    return st.size();
  }
};
```
