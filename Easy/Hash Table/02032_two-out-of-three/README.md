Problem Name: [Two Out of Three](https://leetcode.com/problems/two-out-of-three/)

Problem #2032

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    map < int, int > mp;
    for ( auto num : nums1 ) mp[num] = 1;

    vector < int > result;
    for ( auto num : nums2 ) {
      if ( mp[num] == 1 ) {
        result.push_back(num);
        mp[num] = 2;
      } else if ( mp[num] == 0 ) mp[num] = 3;
    }

    for ( auto num : nums3 ) {
      if ( mp[num] == 3 || mp[num] == 1 ) {
        result.push_back(num);
        mp[num] = 4;
      }
    }

    return result;
  }
};
```
