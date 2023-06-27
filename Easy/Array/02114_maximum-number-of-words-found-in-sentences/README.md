Problem Name: [Maximum Number of Words Found in Sentences](https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/)

Problem #2114

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int mostWordsFound(vector<string>& sentences) {
    int maxWord = 0;
    for ( auto line : sentences ) {
      int count = 0;
      for ( int i = 0; i < line.length(); i++ ) {
        if ( line[i] == ' ' ) {
          count++;
        }
      }

      maxWord = maxWord < count ? count : maxWord;
    }

    return maxWord + 1;
  }
};
```

Javascript:

```js
/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function (sentences) {
  let maxWord = 0

  for (let i = 0; i < sentences.length; i++) {
    let count = 0
    for (let j = 0; j < sentences[i].length; j++) {
      if (sentences[i][j] == ' ') {
        count++
      }
    }

    maxWord = maxWord < count ? count : maxWord
  }

  return maxWord + 1
}
```
