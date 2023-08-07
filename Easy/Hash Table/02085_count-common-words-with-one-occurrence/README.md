Problem Name: [Count Common Words With One Occurrence](https://leetcode.com/problems/count-common-words-with-one-occurrence/)

Problem #2085

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int countWords(vector<string>& words1, vector<string>& words2) {
    unordered_map < string, int > mp;
    for ( auto word : words1 ) {
      if ( mp[word] == 0 ) mp[word] = 1;
      else if ( mp[word] == 1 ) mp[word] = -1;
    }

    for ( auto word : words2 ) {
      if ( mp[word] == 1 ) mp[word] = 2;
      else if ( mp[word] == 2 ) mp[word] = -1;
    }

    int count = 0;
    for ( auto m : mp ) {
      if ( m.second == 2 ) count++;
    }

    return count;
  }
};
```
