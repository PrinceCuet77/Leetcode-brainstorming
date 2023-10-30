Problem Name: [Percentage of Letter in String](https://leetcode.com/problems/percentage-of-letter-in-string/description/)

Problem #2278

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int percentageLetter(string s, char letter) {
    int count = 0;
    for ( auto ch : s ) count = ch == letter ? count+1 : count;

    return floor((count * 100) / s.size());
  }
};
```
