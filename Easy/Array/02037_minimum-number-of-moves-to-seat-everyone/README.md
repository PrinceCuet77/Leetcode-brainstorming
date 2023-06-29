Problem Name: [Minimum Number of Moves to Seat Everyone](https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/)

Problem #2037

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int minMovesToSeat(vector<int>& seats, vector<int>& students) {
    int result = 0;

    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());

    int n = seats.size();
    for ( int i = 0; i < n; i++ ) {
      result += abs(seats[i] - students[i]);
    }

    return result;
  }
};
```
