Problem Name: [Check if the Sentence Is Pangram](https://leetcode.com/problems/check-if-the-sentence-is-pangram/)

Problem #1832

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool checkIfPangram(string sentence) {
    int n = sentence.size();
    if ( n < 26 ) return false;

    map < char, int > mp;
    for ( int i = 0; i < sentence.size(); i++ ) mp[sentence[i]]++;

    bool flag = true;
    for ( char ch = 'a'; ch <= 'z'; ch++ ) {
      if ( mp[ch] == 0 ) return false;
    }

    return flag;
  }
};
```
