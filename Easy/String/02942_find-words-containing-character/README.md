Problem Name: [Find Words Containing Character](https://leetcode.com/problems/find-words-containing-character/)

Problem #2942

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> findWordsContaining(vector<string>& words, char x) {
    vector < int > result;
    for ( int i = 0; i < words.size(); i++ ) {
      for ( char ch : words[i] ) {
        if ( ch == x ) {
          result.push_back(i);
          break;
        }
      }
    }

    return result;
  }
};
```
