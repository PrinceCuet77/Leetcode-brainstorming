Problem Name: [Two Sum](https://leetcode.com/problems/two-sum/)

Problem #1

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector < int > result;

    multimap < int, int > mp;
    int n = nums.size();
    for ( int i = 0; i < n; i++ ) mp.insert(pair < int, int > {nums[i], i});

    for ( auto it = mp.begin(); it != mp.end(); it++ ) {
      auto it2 = mp.find(target - it->first);
      if ( it2 != mp.end() && it2 != it ) {
        result = {it->second, it2->second};
        break;
      }
    }

    return result;
  }
};
```
