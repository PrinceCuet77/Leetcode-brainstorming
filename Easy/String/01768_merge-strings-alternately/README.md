Problem Name: [Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/description/)

Problem #1768

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string mergeAlternately(string word1, string word2) {
    int len = min(word1.size(), word2.size());
    string result = "";
    for ( int i = 0; i < len; i++ ) result = result + word1[i] + word2[i];

    for ( int i = len; i < word1.size(); i++ ) result += word1[i];
    for ( int i = len; i < word2.size(); i++ ) result += word2[i];

    return result;
  }
};
```
