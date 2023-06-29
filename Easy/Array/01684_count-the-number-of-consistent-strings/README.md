Problem Name: [Count the Number of Consistent Strings](https://leetcode.com/problems/count-the-number-of-consistent-strings/)

Problem #1684

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int countConsistentStrings(string allowed, vector<string>& words) {
    map < char, int > mp;
    for ( auto ch : allowed ) 
      mp[ch]++;
    
    int count = 0;
    for ( auto word : words ) {
      bool flag = true;
      for ( auto ch : word ) {
        if ( !mp[ch] ) flag = false;
      }

      count = flag ? count + 1 : count;
    }

    return count;
  }
};
```
