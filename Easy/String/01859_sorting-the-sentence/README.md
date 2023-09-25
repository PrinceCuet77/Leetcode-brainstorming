Problem Name: [Sorting the Sentence](https://leetcode.com/problems/sorting-the-sentence/description/)

Problem #1859

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string sortSentence(string s) {
    map < int, string > mp;
    string word = "", result = "";

    int n = s.size(), index = -1;
    for ( int i = 0; i < n; i++ ) {
      if ( i == n - 1 ) {
        index = findNumber(s[i]);
        mp[index] = word;
      }
      else if ( s[i] == ' ') {
        mp[index] = word;
        word = "";
      } else if ( s[i+1] == ' ' ) {
        index = findNumber(s[i]);
      } else {
        word += s[i];
      }
    }

    for ( auto m : mp ) {
      result += m.second;
      result += mp.size() != m.first ? " " : "";
    }

    return result;
  }

  int findNumber(char ch) {
    if ( ch == '1' ) return 1;
    else if ( ch == '2' ) return 2;
    else if ( ch == '3' ) return 3;
    else if ( ch == '4' ) return 4;
    else if ( ch == '5' ) return 5;
    else if ( ch == '6' ) return 6;
    else if ( ch == '7' ) return 7;
    else if ( ch == '8' ) return 8;
    else if ( ch == '9' ) return 9;
    
    return 0;
  }
};
```