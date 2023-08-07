Problem Name: [Keyboard Row](https://leetcode.com/problems/keyboard-row/)

Problem #500

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<string> findWords(vector<string>& words) {
    unordered_map < char, int > mp1, mp2, mp3;
    for ( auto ch : "qwertyuiop" ) mp1[ch]++;
    for ( auto ch : "asdfghjkl" ) mp2[ch]++;
    for ( auto ch : "zxcvbnm" ) mp3[ch]++;

    vector < string > result;
    int n = words.size();
    for ( int i = 0; i < n; i++ ) {
      bool flag = true;
      int pointer = 0;
      char firstLetter = tolower(words[i][0]);

      if ( mp1[firstLetter] ) pointer = 1;
      if ( mp2[firstLetter] ) pointer = 2;
      if ( mp3[firstLetter] ) pointer = 3;

      for ( auto ch : words[i] ) {
        char letter = tolower(ch);
        if ( pointer == 1 ) {
          if ( mp1[letter] == 0 ) {
            flag = false;
            break;
          }
        } else if ( pointer == 2 ) {
          if ( mp2[letter] == 0 ) {
            flag = false;
            break;
          }
        } else if ( pointer == 3 ) {
          if ( mp3[letter] == 0 ) {
            flag = false;
            break;
          }
        }
      }

      if ( flag ) result.push_back(words[i]);
    }

    return result;
  }
};
```
