Problem Name: [Most Frequent Number Following Key In an Array](https://leetcode.com/problems/most-frequent-number-following-key-in-an-array/)

Problem #2190

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int mostFrequent(vector<int>& nums, int key) {
    unordered_map < int, int > mp;
    int n = nums.size(), result, cnt = INT_MIN;;
    for ( int i = 1; i < n; i++ ) {
      if ( nums[i-1] == key ) mp[nums[i]]++;

      if ( cnt < mp[nums[i]] ) {
        result = nums[i];
        cnt = mp[nums[i]];
      }
    }

    return result;
  }
};
```
