Problem Name: [Maximum Number of Words You Can Type](https://leetcode.com/problems/maximum-number-of-words-you-can-type/)

Problem #1935

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int canBeTypedWords(string text, string brokenLetters) {
    map < char, int > mp;
    int n = brokenLetters.size();
    for ( int i = 0; i < n; i++ ) {
      mp[brokenLetters[i]] = 1;
    }

    n = text.size();
    bool flag = false;
    int count = 0;
    for ( int i = 0; i < n; i++ ) {
      if ( text[i] == ' ' ) continue;
      else {
        if ( mp[text[i]] ) flag = true;

        if ( i == (n - 1) || text[i+1] == ' ' ) {
          if (flag == false) count++;
          else flag = false;
        }
      }
    }

    return count;
  }
};
```
