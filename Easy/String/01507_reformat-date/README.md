Problem Name: [Reformat Date](https://leetcode.com/problems/reformat-date/)

Problem #1507

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string reformatDate(string date) {
    string result = "";
    for ( int i = 1; i <= 4; i++ ) result += date[date.size()+i-5];
    result += '-';

    string month = "";
    month = date[date.size() - 8];
    month += date[date.size() - 7];
    month += date[date.size() - 6];

    result += digitOfMonth(month);

    bool flag = true;
    string day = "";
    day += date[0];
    if (isdigit(date[1])) {
      day += date[1];
      flag = false;
    }

    result += flag ? "0" + day : day;

    return result;
  }

  string digitOfMonth(string month) {
    if ( month == "Jan" ) return "01-";
    else if ( month == "Feb" ) return "02-";
    else if ( month == "Mar" ) return "03-";
    else if ( month == "Apr" ) return "04-";
    else if ( month == "May" ) return "05-";
    else if ( month == "Jun" ) return "06-";
    else if ( month == "Jul" ) return "07-";
    else if ( month == "Aug" ) return "08-";
    else if ( month == "Sep" ) return "09-";
    else if ( month == "Oct" ) return "10-";
    else if ( month == "Nov" ) return "11-";
    else return "12-";
  }
};
```
