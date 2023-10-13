Problem Name: [Reverse Prefix of Word](https://leetcode.com/problems/reverse-prefix-of-word/)

Problem #2000

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string reversePrefix(string word, char ch) {
    int n = word.size();
    for ( int i = 0; i < n; i++ ) {
      if ( word[i] == ch ) {
        reverse(word.begin(), word.begin() + i + 1);
        break;
      }
    }

    return word;
  }
};
```
