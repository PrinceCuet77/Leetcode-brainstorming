Problem Name: [Truncate Sentence](https://leetcode.com/problems/truncate-sentence/)

Problem #1816

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string truncateSentence(string s, int k) {
    string result = "";

    for ( auto word : s ) {
      if ( k == 1 && word == ' ' ) break;

      result += word;

      if ( word == ' ' ) k--;
    }

    return result;
  }
};
```

Javascript:

```js
/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var truncateSentence = function (s, k) {
  let result = ''

  let n = s.length
  for (let i = 0; i < n; i++) {
    if (k == 1 && s[i] == ' ') break

    result += s[i]

    if (s[i] == ' ') k--
  }

  return result
}
```
