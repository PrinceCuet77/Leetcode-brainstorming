Problem Name: [String Matching in an Array](https://leetcode.com/problems/string-matching-in-an-array/)

Problem #1408

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<string> stringMatching(vector<string>& words) {
    vector < string > result;
    for ( int i = 0; i < words.size(); i++ ) {
      for ( int j = 0; j < words.size(); j++ ) {
        if ( i != j && words[j].find(words[i]) <= words[j].size() ) {
          result.push_back(words[i]);
          break;
        }
      }
    }

    return result;
  }
};
```
