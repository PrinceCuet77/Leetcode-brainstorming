Problem Name: [Intersection of Multiple Arrays](https://leetcode.com/problems/intersection-of-multiple-arrays/)

Problem #2248

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> intersection(vector<vector<int>>& nums) {
    map < int, int > mp;
    for ( auto num : nums ) {
      for ( auto n : num ) {
        mp[n]++;
      }
    }

    vector < int > result;
    int n = nums.size();
    for ( auto m : mp ) {
      if ( m.second == n ) result.push_back(m.first);
    }

    return result;
  }
};
```
