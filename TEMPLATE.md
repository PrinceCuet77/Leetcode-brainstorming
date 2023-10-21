Problem Name: [Student Attendance Record I](https://leetcode.com/problems/student-attendance-record-i/)

Problem #551

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool checkRecord(string s) {
    int absent = 0, late = 0, maxLate = 0;
    for ( char ch : s ) {
      if ( ch == 'L' ) late++;
      else {
        if ( ch == 'A' ) absent++;
        maxLate = max(maxLate, late);
        late = 0;
      }
    }
    maxLate = max(maxLate, late);
    late = 0;

    if ( absent < 2 && maxLate < 3 ) return true;
    else return false;
  }
};
```