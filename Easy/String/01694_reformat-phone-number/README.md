Problem Name: [Reformat Phone Number](https://leetcode.com/problems/reformat-phone-number/description/)

Problem #1694

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
  string prepare(string str, int n) {
    bool flag = true;
    string result = "";
    for ( int i = 0; i < n; i += 3 ) {
      if ( flag ) {
        result += str.substr(i, 3);
        flag = false;
      } else result += "-" + str.substr(i, 3);
    }
    return result;
  }

public:
  string reformatNumber(string number) {
    string result = "", temp = "";
    for ( int i = 0; i < number.size(); i++ ) {
      if ( number[i] == ' ' || number[i] == '-' ) continue;
      temp += number[i];
    }
    
    if ( temp.size() % 3 == 0 ) result = prepare(temp, temp.size());
    else if ( temp.size() % 3 == 1 ) {
      result = prepare(temp, temp.size() - 4);
      if ( result.size() ) result += "-" + temp.substr(temp.size() - 4, 2); 
      else result += temp.substr(temp.size() - 4, 2);
      result += "-" + temp.substr(temp.size() - 2, 2);
    } else {
      result = prepare(temp, temp.size() - 2);
      if ( result.size() ) result += "-" + temp.substr(temp.size() - 2, 2); 
      else result += temp.substr(temp.size() - 2, 2);
    }

    return result;
  }
};
```
