Problem Name: [Number of Employees Who Met the Target](https://leetcode.com/problems/number-of-employees-who-met-the-target/)

Problem #2798

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
    int result = 0;
    for ( auto hour : hours ) {
      if ( hour >= target ) result++;
    }

    return result;
  }
};
```
