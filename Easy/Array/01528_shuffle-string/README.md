Problem Name: [Shuffle String](https://leetcode.com/problems/shuffle-string/)

Problem #1528

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string restoreString(string s, vector<int>& indices) {
    string result = s;

    int n = indices.size();
    for ( int i = 0; i < n; i++ ) {
      result[indices[i]] = s[i];
    }

    return result;
  }
};
```

Javascript:

```js
/**
 * @param {string} s
 * @param {number[]} indices
 * @return {string}
 */
var restoreString = function (s, indices) {
  let result = []

  let n = indices.length
  for (let i = 0; i < n; i++) {
    result[indices[i]] = s[i]
  }

  return result.join('')
}
```
