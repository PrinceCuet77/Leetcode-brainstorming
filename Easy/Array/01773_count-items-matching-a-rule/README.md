Problem Name: [Count Items Matching a Rule](https://leetcode.com/problems/count-items-matching-a-rule/)

Problem #1773

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    int count = 0, index = -1;

    if ( ruleKey == "type" ) {
      index = 0;
    } else if ( ruleKey == "color" ) {
      index = 1;
    } else {
      index = 2;
    }

    int n = items.size();
    for ( int i = 0; i < n; i++ ) {
      if ( items[i][index] == ruleValue ) {
        count++;
      }
    }

    return count;
  }
};
```

Javascript:

```js
/**
 * @param {string[][]} items
 * @param {string} ruleKey
 * @param {string} ruleValue
 * @return {number}
 */
var countMatches = function (items, ruleKey, ruleValue) {
  let count = 0, index = -1

  if (ruleKey == 'type') {
    index = 0
  } else if (ruleKey == 'color') {
    index = 1
  } else {
    index = 2
  }

  let n = items.length
  for (let i = 0; i < n; i++) {
    if (items[i][index] == ruleValue) {
      count++
    }
  }

  return count
}
```
