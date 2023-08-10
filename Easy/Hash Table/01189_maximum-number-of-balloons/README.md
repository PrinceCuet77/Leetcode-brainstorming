Problem Name: [Maximum Number of Balloons](https://leetcode.com/problems/maximum-number-of-balloons/)

Problem #1189

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int maxNumberOfBalloons(string text) {
    unordered_map < char, int > mp;
    for ( auto ch : text ) mp[ch]++;

    return min(mp['b'], min(mp['a'], min(mp['l'] / 2, min(mp['o'] / 2, mp['n']))));
  }
};
```
