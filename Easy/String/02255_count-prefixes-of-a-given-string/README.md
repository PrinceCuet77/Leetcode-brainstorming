Problem Name: [Count Prefixes of a Given String](https://leetcode.com/problems/count-prefixes-of-a-given-string/description/)

Problem #2255

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int countPrefixes(vector<string>& words, string s) {
    int result = 0;
    for ( string word : words ) {
      string str = s.substr(0, word.size());
      result = str == word ? result+1 : result;
    }

    return result;
  }
};
```
