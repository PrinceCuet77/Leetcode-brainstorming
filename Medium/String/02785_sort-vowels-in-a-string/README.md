Problem Name: [Sort Vowels in a String](https://leetcode.com/problems/sort-vowels-in-a-string/)

Problem #2785

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
  bool isVowel(char ch) {
    if ( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ) return true;
    else if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ) return true;
    else return false;
  }

public:
  string sortVowels(string s) {
    vector < char > store;
    for ( int i = 0; i < s.size(); i++ ) {
      if ( isVowel(s[i]) ) store.push_back(s[i]);
    }

    sort(store.begin(), store.end());

    string result = "";
    for ( int i = 0, idx = 0; i < s.size(); i++ ) {
      if ( isVowel(s[i]) ) result += store[idx++];
      else result += s[i];
    }

    return result;
  }
};
```
