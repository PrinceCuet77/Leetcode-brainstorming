Problem Name: [Find First Palindromic String in the Array](https://leetcode.com/problems/find-first-palindromic-string-in-the-array/)

Problem #2108

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string firstPalindrome(vector<string>& words) {
    string result;

    for ( auto word : words ) {
      int n = word.size();
      bool flag = true;
      for ( int i = 0; i < (n / 2) + 1; i++ ) {
        if ( word[i] != word[n - i - 1] ) {
          flag = false;
          break;
        }
      }

      if ( flag ) {
        result = word;
        break;
      }
    }

    return result;
  }
};
```
