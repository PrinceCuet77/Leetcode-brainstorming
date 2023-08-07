Problem Name: [Greatest English Letter in Upper and Lower Case](https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case/)

Problem #2309

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string greatestLetter(string s) {
    set < char > st;
    for ( auto ch : s ) st.insert(ch);

    for ( auto it = st.rbegin(); it != st.rend(); it++ ) {
      if ( *it >= 'a' && *it <= 'z' ) continue;

      int lower = tolower(*it);
      if ( st.find(lower) != st.end() ) return string(1, *it);
    }
    cout << endl;

    return "";
  }
};
```
