Problem Name: [Partitioning Into Minimum Number Of Deci-Binary Numbers](https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/description/)

Problem #1689

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  int minPartitions(string n) {
    int result = 0;
    for ( char ch : n ) 
      result = max(result, ch - '0');

    return result;
  }
};
```
