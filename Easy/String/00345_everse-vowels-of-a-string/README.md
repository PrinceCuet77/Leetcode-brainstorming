Problem Name: [Reverse Vowels of a String](https://leetcode.com/problems/reverse-vowels-of-a-string/description/)

Problem #345

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string reverseVowels(string s) {
    int start = 0, end = s.size();
    while ( start <= end ) {
      if ( isVowel(s[start]) && isVowel(s[end]) ) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
      } else {
        if ( !isVowel(s[start]) ) start++;
        if ( !isVowel(s[end]) ) end--;
      }
    }

    return s;
  }

  bool isVowel(char ch) {
    if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
      return true;
    if ( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
      return true;
    return false;
  }
};
```