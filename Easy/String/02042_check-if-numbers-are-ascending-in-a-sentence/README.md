Problem Name: [Check if Numbers Are Ascending in a Sentence](https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence/description/)

Problem #2042

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool areNumbersAscending(string s) {
    string digitStr = "";
    int previousValue = -1;
    for ( int i = 0; i < s.size(); i++ ) {
      if ( isdigit(s[i]) ) {
        digitStr += s[i];

        if ( s[i+1] == ' ' || i+1 == s.size() ) {
          int currentValue = stringToInt(digitStr);
          cout << currentValue << " ";
          if ( previousValue >= currentValue ) {
            return false;
          }
          digitStr = "";
          previousValue = currentValue;
        }
      }
    }

    // if ( previousValue >= stringToInt(digitStr) ) return false;

    return true;
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
