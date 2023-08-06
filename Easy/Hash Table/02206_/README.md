Problem Name: [Divide Array Into Equal Pairs](https://leetcode.com/problems/divide-array-into-equal-pairs/)

Problem #2206

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool divideArray(vector<int>& nums) {
    map < int, int > mp;
    for ( auto num : nums ) mp[num]++;

    for ( auto m : mp ) {
      if ( m.second % 2 == 1 ) return false;
    }

    return true;
  }
};
```
