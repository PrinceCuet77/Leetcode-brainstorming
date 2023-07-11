Problem Name: [Merge Similar Items](https://leetcode.com/problems/merge-similar-items/)

Problem #2363

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
    map < int, int > mp;

    for ( auto item : items1 ) mp[item[0]] += item[1];
    for ( auto item : items2 ) mp[item[0]] += item[1];

    vector < vector < int > > result;
    for ( auto m : mp ) {
      result.push_back({m.first, m.second});
    }

    return result;
  }
};
```
