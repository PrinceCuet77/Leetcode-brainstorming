Problem Name: [Number of Strings That Appear as Substrings in Word](https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/description/)

Problem #1967

Difficulty: `Easy`

Cpp:

```cpp
// Contiguous Sequence - Index by index word match with others

class Solution {
public:
  int numOfStrings(vector<string>& patterns, string word) {
    int result = 0;
    for ( int i = 0; i < patterns.size(); i++ ) {
      if ( word.find(patterns[i]) <= word.size() ) result++;
    }

    return result;
  }
};
```
