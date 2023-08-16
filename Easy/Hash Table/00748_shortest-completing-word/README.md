Problem Name: [Shortest Completing Word](https://leetcode.com/problems/shortest-completing-word/)

Problem #748

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string shortestCompletingWord(string licensePlate, vector<string>& words) {
    unordered_map < char, int > mp;
    for ( char ch : licensePlate ) {
      char lowerCh = tolower(ch);
      if ( lowerCh >= 'a' && lowerCh <= 'z' ) mp[lowerCh]++;
    }

    string result = "";
    for ( string word : words ) {
      unordered_map < char, int > mp1;
      for ( char ch : word ) mp1[ch]++;

      bool flag = true;
      for ( auto m : mp ) {
        if ( m.second > mp1[m.first] ) {
          flag = false;
          break;
        }
      }

      if ( flag ) {
        if ( result.size() == 0 ) result = word;
        else {
          if ( result.size() > word.size() ) result = word;
        }
      }
    }

    return result;
  }
};
```
