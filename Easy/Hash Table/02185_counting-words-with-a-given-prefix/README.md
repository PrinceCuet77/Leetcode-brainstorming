Problem Name: [Counting Words With a Given Prefix](https://leetcode.com/problems/counting-words-with-a-given-prefix/)

Problem #2185

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int prefixCount(vector<string>& words, string pref) {
    int count = 0;
    for ( auto word : words ) {
      bool flag = true;
      for ( int i = 0; i < pref.size(); i++ ) {
        if ( word[i] != pref[i] ) {
          flag = false;
          break;
        }
      }

      count = flag ? count+1 : count;
    }

    return count;
  }
};
```
