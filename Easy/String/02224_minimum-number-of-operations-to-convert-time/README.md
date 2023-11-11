Problem Name: [Minimum Number of Operations to Convert Time](https://leetcode.com/problems/minimum-number-of-operations-to-convert-time/description/)

Problem #2224

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
  int getTime(string &s) {
      return stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3));
  }
  
public:
  int convertTime(string current, string correct) {
    int diff = getTime(correct) - getTime(current), ops[4] = {60,15,5,1}, ans = 0;
    for (int op : ops) {
      ans += diff / op;
      diff %= op;
    }
    return ans;
  }
};
```
