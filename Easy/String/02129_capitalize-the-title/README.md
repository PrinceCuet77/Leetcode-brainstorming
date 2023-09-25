Problem Name: [Capitalize the Title](https://leetcode.com/problems/capitalize-the-title/description/)

Problem #2129

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string capitalizeTitle(string title) {
    int n = title.size();
    string word = "", result = "";
    for ( int i = 0; i <= n; i++ ) {
      if ( title[i] == ' ' || i == n ) {
        if ( word.size() >= 3 ) {
          word[0] = word[0] + 'A' - 'a'; // Make it upper case
        }


        result += word;
        result += i == n ? "" : " ";
        word = "";
      } else {
        if ( title[i] >= 'A' && title[i] <= 'Z' ) word += title[i] - 'A' + 'a'; // Make it lower case
        else word += title[i];
      }
    }

    return result;
  }
};
```
