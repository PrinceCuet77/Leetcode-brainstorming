Problem Name: [Unique Morse Code Words](https://leetcode.com/problems/unique-morse-code-words/)

Problem #804

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int uniqueMorseRepresentations(vector<string>& words) {
    string letters[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    map < string, int > mp;
    for ( auto word : words ) {
      string store = "";
      for ( int i = 0; i < word.size(); i++ ) {
        store += letters[word[i] - 'a'];
      }
      mp[store]++;
    }

    return mp.size();
  }
};
```
