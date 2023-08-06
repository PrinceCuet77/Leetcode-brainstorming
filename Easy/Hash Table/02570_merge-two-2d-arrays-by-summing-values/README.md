Problem Name: [Merge Two 2D Arrays by Summing Values](https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/)

Problem #2570

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
    map < int, int > mp;
    for ( auto num : nums1 ) mp[num[0]] += num[1];

    for ( auto num : nums2 ) mp[num[0]] += num[1];

    vector < vector < int > > result;
    for ( auto m : mp ) {
      result.push_back({m.first, m.second});
    }

    return result;
  }
};
```
