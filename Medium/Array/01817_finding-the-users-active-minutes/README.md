Problem Name: [Finding the Users Active Minutes](https://leetcode.com/problems/finding-the-users-active-minutes/description/)

Problem #1817

Tag: `Array` `Hash Table`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
    unordered_map < int, unordered_set < int > > mp;
    for ( int i = 0; i < logs.size(); i++ ) {
      mp[logs[i][0]].insert(logs[i][1]);
    }

    unordered_map < int, int > m;
    for ( auto [u, v]: mp ) {
      m[v.size()]++;
    }

    vector<int> result;
    for ( int i = 0; i < k; i++ ) {
      result.push_back(m[i+1]);
    }
    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Track id according to time</li>
  <li>Organization it in <code>map</code></li>
  <li>And store it in <code>vector</code></li>
</details>
