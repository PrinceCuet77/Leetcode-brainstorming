Problem Name: [Count the Number of Vowel Strings in Range](https://leetcode.com/problems/count-the-number-of-vowel-strings-in-range/)

Problem #2586

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int vowelStrings(vector<string>& words, int left, int right) {
    int result = 0;
    for ( int i = left; i <= right; i++ ) {
      int n = words[i].size();
      if ( isVowel(words[i][0]) && isVowel(words[i][n-1]) ) result++;
    }

    return result;
  }

  bool isVowel(char ch) {
    if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ) return true;
    return false;
  }
};
```
