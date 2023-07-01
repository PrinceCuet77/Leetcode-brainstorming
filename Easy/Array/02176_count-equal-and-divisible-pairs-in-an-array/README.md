Problem Name: [Count Equal and Divisible Pairs in an Array](https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/)

Problem #2176

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int countPairs(vector<int>& nums, int k) {
    map < int, vector < int > > mp;
    int count = 0;

    int n = nums.size();
    for ( int i = 0; i < n; i++ ) {
      if ( mp[nums[i]].size() ) {
        for ( auto index : mp[nums[i]] ) {
          if ( (i * index) % k == 0 ) {
            count++;
          }
        }
      }
      
      mp[nums[i]].push_back(i);
    }

    return count;
  }
};
```
