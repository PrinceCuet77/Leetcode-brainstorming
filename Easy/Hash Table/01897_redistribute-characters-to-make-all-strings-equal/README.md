Problem Name: [Redistribute Characters to Make All Strings Equal](https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/)

Problem #1897

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool makeEqual(vector<string>& words) {
    int n = words.size();
    vector < int > store(26, 0);
    for ( auto word : words ) 
      for ( auto ch : word ) 
        store[ch - 'a']++;
    
    for ( auto st : store ) {
      if ( st % n != 0 ) return false;
    }

    return true;
  }
};
```
