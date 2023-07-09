Problem Name: [Find the Difference of Two Arrays](https://leetcode.com/problems/find-the-difference-of-two-arrays/)

Problem #2215

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    vector < vector < int > > result = {{}, {}};

    map < int, int > mp1, mp2;
    for ( auto num : nums1 ) mp1[num]++;
    for ( auto num : nums2 ) mp2[num]++;

    for ( auto num : nums1 ) {
      if ( !mp2[num] ) {
        result[0].push_back(num);
        mp2[num] = -1;
      }
    }

    for ( auto num : nums2 ) {
      if ( !mp1[num] ) {
        result[1].push_back(num);
        mp1[num] = -1;
      }
    }

    return result;
  }
};
```
