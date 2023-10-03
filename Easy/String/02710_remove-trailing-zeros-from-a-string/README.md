Problem Name: [Remove Trailing Zeros From a String](https://leetcode.com/problems/remove-trailing-zeros-from-a-string/description/)

Problem #2710

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string removeTrailingZeros(string num) {
    int n = num.size(), position = -1;
    for ( int i = n - 1; i >= 0; i-- ) {
      if ( num[i] == '0' ) position = i;
      else break;
    }

    return num.substr(0, position);
  }
};
```
