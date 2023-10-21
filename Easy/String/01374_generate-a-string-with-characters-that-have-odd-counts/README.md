Problem Name: [Generate a String With Characters That Have Odd Counts](https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/description/)

Problem #1374

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string generateTheString(int n) {
    string result(n-1, 'a');
    result += n % 2 == 0 ? 'b' : 'a';
    return result;
  }
};
```
