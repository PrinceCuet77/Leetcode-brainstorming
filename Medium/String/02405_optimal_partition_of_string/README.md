Problem Name: [Optimal Partition of String](https://leetcode.com/problems/optimal-partition-of-string/)

Problem #2405

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  int partitionString(string s) {
    map < char, int > mp;
    int result = 1;
    for ( char ch : s ) {
      if ( mp[ch] ) {
        result++;
        mp.clear();
      }
      mp[ch]++;
    }

    return result;
  }
};
```
