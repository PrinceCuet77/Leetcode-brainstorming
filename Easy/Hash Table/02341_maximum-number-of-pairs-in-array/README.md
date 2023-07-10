Problem Name: [Maximum Number of Pairs in Array](https://leetcode.com/problems/maximum-number-of-pairs-in-array/)

Problem #2341

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> numberOfPairs(vector<int>& nums) {
    map < int, int > mp;
    for ( auto num : nums ) mp[num]++;

    int pair = 0, remain = 0;
    for ( auto m : mp ) {
      if ( m.second >= 2 ) pair += m.second / 2;
      if ( m.second % 2 == 1 ) remain++;
    }

    return {pair, remain};
  }
};
```
