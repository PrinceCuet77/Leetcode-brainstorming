Problem Name: [Minimum Time to Type Word Using Special Typewriter](https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/)

Problem #1974

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int minTimeToType(string word) {
    int result = 0;
    char pointer = 'a';
    for ( int i = 0; i < word.size(); i++ ) {
      int distance = abs(word[i] - pointer);
      result += min(distance, 26 - distance) + 1;
      pointer = word[i];
    }

    return result;
  }
};
```
