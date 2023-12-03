Problem Name: [Subarrays Distinct Element Sum of Squares I](https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/description/)

Problem #2913

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int sumCounts(vector<int>& nums) {
    int result = 0;
    for ( int i = 0; i < nums.size(); i++ ) {
      unordered_map < int, int > mp;
      int count = 0;
      for ( int j = i; j < nums.size(); j++ ) {
        mp[nums[j]]++;
        if ( mp[nums[j]] == 1 ) count++;
        result += count * count;
      }
    }

    return result;
  }
};
```
