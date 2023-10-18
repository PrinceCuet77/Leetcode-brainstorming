Problem Name: [Add Strings](https://leetcode.com/problems/add-strings/)

Problem #415

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string addStrings(string num1, string num2) {
    int len = min(num1.size(), num2.size()), rem = 0;
    string result = "";
    for ( int i = 0; i < len; i++ ) {
      int val1 = num1[num1.size() - i - 1] - '0';
      int val2 = num2[num2.size() - i - 1] - '0';

      int value = (val1 + val2 + rem) % 10;
      result = result + to_string(value);
      rem = (val1 + val2 + rem) / 10;
    }

    if ( num1.size() >= num2.size() ) {
      for ( int i = num1.size() - len - 1; i >= 0; i-- ) {
        int val = num1[i] - '0';

        int value = (val + rem) % 10;
        result = result + to_string(value);
        rem = (val + rem) / 10;
      }
    } else {
      for ( int i = num2.size() - len - 1; i >= 0; i-- ) {
        int val = num2[i] - '0';

        int value = (val + rem) % 10;
        result = result + to_string(value);
        rem = (val + rem) / 10;
      }
    }

    if ( rem != 0 ) result = result + to_string(rem);

    reverse(result.begin(), result.end());

    return result;
  }
};
```
