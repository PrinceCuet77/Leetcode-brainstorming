Problem Name: [Check if Number Has Equal Digit Count and Digit Value](https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value/)

Problem #2283

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool digitCount(string num) {
    int n = num.size();
    map < int, int > mp;
    for ( int i = 0; i < n; i++ ) mp[num[i] - '0']++;

    for ( int i = 0; i < n; i++ ) {
      if ( mp[i] != (num[i] - '0') ) {
        return false;
      }
    }

    return true;
  }
};
```
