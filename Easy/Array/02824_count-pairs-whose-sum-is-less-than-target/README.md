Problem Name: [Count Pairs Whose Sum is Less than Target](https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/)

Problem #2824

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int countPairs(vector<int>& nums, int target) {
    int n = nums.size(), result = 0;
    sort(nums.begin(), nums.end());

    for ( int i = 0; i < n; i++ ) {
      for ( int j = i+1; j < n; j++ ) {
        if ( nums[i] + nums[j] < target ) result++;
        else break;
      }
    }

    return result;
  }
};
```
