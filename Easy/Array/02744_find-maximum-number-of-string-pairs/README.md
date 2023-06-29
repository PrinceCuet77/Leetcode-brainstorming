Problem Name: [Find Maximum Number of String Pairs](https://leetcode.com/problems/find-maximum-number-of-string-pairs/)

Problem #2744

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int maximumNumberOfStringPairs(vector<string>& words) {
    int count = 0;
    
    map < string, int > mp;
    int n = words.size();
    for ( auto word : words ) {
      string reverseWord = word;
      reverse(reverseWord.begin(), reverseWord.end());
      if ( mp[reverseWord] > 0 ) {
        count++;
        mp[reverseWord]--;
      } else {
        mp[word]++;
      }
    }

    return count;
  }
};
```
