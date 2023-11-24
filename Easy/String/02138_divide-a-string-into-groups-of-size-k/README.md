Problem Name: [Divide a String Into Groups of Size k](https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/)

Problem #2138

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<string> divideString(string s, int k, char fill) {
    vector < string > result;
    for ( int i = 0; i < s.size(); i += k ) {
      if ( i + k < s.size() ) result.push_back(s.substr(i, k));
      else {
        string str = s.substr(i, s.size() - i);
        int remain = k - str.size();
        for ( int j = 0; j < remain; j++ ) str += fill;
        result.push_back(str);
      }
    }

    return result;
  }
};
```
