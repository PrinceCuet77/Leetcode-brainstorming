Problem Name: [Crawler Log Folder](https://leetcode.com/problems/crawler-log-folder/description/)

Problem #1598

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int minOperations(vector<string>& logs) {
    int result = 0;
    for ( auto log : logs ) {
      if ( log == "../" && result != 0 ) result--;
      else if ( log == "./" || ( log == "../" && result == 0) ) continue;
      else result++;
    }

    return result;
  }
};
```