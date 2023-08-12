Problem Name: [Count Vowel Substrings of a String](https://leetcode.com/problems/count-vowel-substrings-of-a-string/)

Problem #2062

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int countVowelSubstrings(string s) {
    int n = s.size();
    int count = 0;
    for ( int i = 0; i < n; i++ ) {
      unordered_set < char > st;
      for ( int j = i; j < n; j++ ) {
        if ( isVowel(s[j]) == false ) break;
        
        st.insert(s[j]);
        if ( st.size() == 5 ) count++;
      }
    }

    return count;
  }

  bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
  }
};
```
