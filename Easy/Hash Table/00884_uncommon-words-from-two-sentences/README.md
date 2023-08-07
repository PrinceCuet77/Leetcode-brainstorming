Problem Name: [Uncommon Words from Two Sentences](https://leetcode.com/problems/uncommon-words-from-two-sentences/)

Problem #884

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<string> uncommonFromSentences(string s1, string s2) {
    int n = s1.size();
    string word = "";
    unordered_map < string, int > mp;
    for ( int i = 0; i < n; i++ ) {
      if ( s1[i] == ' ' ) continue;
      word += s1[i];
      if ( s1[i+1] == ' ' || i == (n - 1) ) {
        mp[word]++;
        word = "";
      }
    }

    n = s2.size();
    for ( int i = 0; i < n; i++ ) {
      if ( s2[i] == ' ' ) continue;
      word += s2[i];
      if ( s2[i+1] == ' ' || i == (n - 1) ) {
        mp[word]++;
        word = "";
      }
    }

    vector < string > result;
    for ( auto m : mp ) {
      if ( m.second == 1 ) result.push_back(m.first);
    }

    return result;
  }
};
```
