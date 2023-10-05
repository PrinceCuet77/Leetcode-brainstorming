Problem Name: [DI String Match](https://leetcode.com/problems/di-string-match/)

Problem #942

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> diStringMatch(string s) {
    vector < int > result;
    int low = 0, high = s.size();
    for ( char ch : s ) result.push_back(ch == 'D' ? high-- : low++);
    result.push_back(high);

    return result;
  }
};
```