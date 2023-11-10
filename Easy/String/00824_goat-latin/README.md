Problem Name: [Goat Latin](https://leetcode.com/problems/goat-latin/description/)

Problem #824

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string toGoatLatin(string sentence) {
    string result = "", countA = "a", temp = "", later;
    bool flag = isVowel(sentence[0]);
    later = sentence[0];
    if ( flag ) {
      temp = sentence[0];
      later = "";
    }
    for ( int i = 1; i < sentence.size(); i++ ) {
      if ( sentence[i] == ' ' ) {
        result += temp + later + "ma" + countA + " ";

        countA += "a";
        flag = isVowel(sentence[i+1]);
        if ( flag ) {
          temp =  sentence[i+1];
          later = "";
        }
        else {
          temp = "";
          later = sentence[i+1];
        }
        i++;
      } else temp += sentence[i];
    }
    result += temp + later + "ma" + countA;

    return result;
  }

  bool isVowel(char ch) {
    if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ) return true;
    if ( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ) return true;
    return false;
  }
};
```
