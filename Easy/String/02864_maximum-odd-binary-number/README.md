Problem Name: [Maximum Odd Binary Number](https://leetcode.com/problems/maximum-odd-binary-number/description/)

Problem #2864

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string maximumOddBinaryNumber(string s) {
    string result = "";
    int count = -1;
    for ( char ch : s ) count = ch == '1' ? count+1 : count;

    for ( int i = 0; i < count; i++ ) result += '1';
    for ( int i = 0; i < s.size() - count - 1; i++ ) result += '0';
    result += '1';

    return result;
  }
};
```
