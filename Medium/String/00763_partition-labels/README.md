Problem Name: [Partition Labels](https://leetcode.com/problems/partition-labels/description/)

Problem #763

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  vector<int> partitionLabels(string s) {
    unordered_map < char, int > mp;
    for ( int i = 0; i < s.size(); i++ ) mp[s[i]] = i;

    vector < int > result;
    for ( int i = 0, val = 0; i < s.size(); i = val ) {
      val = mp[s[i]];
      for ( int j = i; j < val; j++ ) val = max(val, mp[s[j]]);
      result.push_back(abs(i - ++val));
    }

    return result;
  }
};
```
