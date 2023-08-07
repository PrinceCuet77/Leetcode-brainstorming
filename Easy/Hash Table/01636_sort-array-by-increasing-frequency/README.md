Problem Name: [Sort Array by Increasing Frequency](https://leetcode.com/problems/sort-array-by-increasing-frequency/)

Problem #1636

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  static bool cmp(pair <int, int > &a, pair < int, int > &b) {
    return  (a.second == b.second) ? a.first > b.first : a.second < b.second;
  }

  vector<int> frequencySort(vector<int>& nums) {
    unordered_map < int, int > mp;
    for ( auto n : nums ) mp[n]++;

    vector < pair < int, int > > store;
    for ( auto m : mp ) store.push_back({m.first, m.second});

    sort(store.begin(), store.end(), cmp);

    int n = store.size();
    vector < int > result;
    for ( int i = 0; i < n; i++ ) {
      for ( int j = 0; j < store[i].second; j++ ) {
        result.push_back(store[i].first);
      } 
    }

    return result;
  }
};
```
