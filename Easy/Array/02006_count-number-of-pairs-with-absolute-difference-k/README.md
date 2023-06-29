Problem Name: [Count Number of Pairs With Absolute Difference K](https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/)

Problem #2006

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int countKDifference(vector<int>& nums, int k) {
    int count = 0;
    map < int, int > mp;
    for ( auto num : nums ) {
      count += mp[num - k] + mp[num + k];
      mp[num]++;
    }

    return count;
  }
};
```
