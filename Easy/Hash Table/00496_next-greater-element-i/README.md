Problem Name: [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/)

Problem #496

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    int n = nums2.size();
    map < int, int > mp;
    for ( int i = 0; i < n; i++ ) {
      for ( int j = i + 1; j < n; j++ ) {
        if ( nums2[i] < nums2[j] ) {
          mp[nums2[i]] = nums2[j];
          break;
        }
      }

      if ( mp[nums2[i]] == 0 ) mp[nums2[i]] = -1;
    }

    vector<int> result;
    for ( auto num : nums1 ) {
      result.push_back(mp[num]);
    }

    return result;
  }
};
```
