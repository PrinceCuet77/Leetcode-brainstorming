Problem Name: [Separate the Digits in an Array](https://leetcode.com/problems/separate-the-digits-in-an-array/)

Problem #2553

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> separateDigits(vector<int>& nums) {
    vector < int > result;

    for ( auto num : nums ) {
      vector < int > single;
      while ( num ) {
        single.push_back(num % 10);
        num /= 10;
      }

      int n = single.size();
      for ( int i = n - 1; i >= 0; i-- ) result.push_back(single[i]);
    }

    return result;
  }
};
```
