Problem Name: [Find and Replace Pattern](https://leetcode.com/problems/find-and-replace-pattern/description/)

Problem #890

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
  vector < int > findPattern(string str) {
    unordered_map < char, int > mp;
    int pointer = 1;
    vector < int > vec;
    
    for ( char ch : str ) {
      if ( mp[ch] == 0 ) mp[ch] = pointer++;
      vec.push_back(mp[ch]);
    }

    return vec;
  }

public:
  vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    vector < int > vec = findPattern(pattern);

    vector < string > result;
    for ( int i = 0; i < words.size(); i++ ) {
      vector < int > final = findPattern(words[i]);
      if ( final == vec ) result.push_back(words[i]);
    }

    return result;
  }
};
```
