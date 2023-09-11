Problem Name: [Group the People Given the Group Size They Belong To](https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/)

Problem #1282

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
    int n = groupSizes.size();
    vector < vector < int > > result;
    unordered_map < int, vector < int > > mp;

    for ( int i = 0; i < n; i++ ) {
      int group = groupSizes[i];
      mp[group].push_back(i);

      if ( mp[group].size() == groupSizes[i] ) {
        result.push_back(mp[group]);
        mp[group] = {};
      }
    }

    return result;
  }
};
```
