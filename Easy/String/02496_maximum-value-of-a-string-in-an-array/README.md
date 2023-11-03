Problem Name: [Maximum Value of a String in an Array](https://leetcode.com/problems/maximum-value-of-a-string-in-an-array/description/)

Problem #2496

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int maximumValue(vector<string>& strs) {
    int result = 0;
    for ( auto str : strs ) {
      bool flag = false;
      for ( auto ch : str ) {
        if ( ch >= 'a' && ch <= 'z' ) {
          flag = true;
          break;
        }
      }

      int val = flag ? str.size() : stringToInt(str);
      result = max(result, val);
    }

    return result;
  }

  int stringToInt(string str) {
    int result = 0;
    for ( int i = 0; i < str.size(); i++ ) {
      result = result * 10 + str[i] - '0';
    }
    return result;
  }
};
```
