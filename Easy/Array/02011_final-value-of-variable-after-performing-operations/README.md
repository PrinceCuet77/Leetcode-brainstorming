Problem Name: [Final Value of Variable After Performing Operations](https://leetcode.com/problems/final-value-of-variable-after-performing-operations/)

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int finalValueAfterOperations(vector<string>& operations) {
    int count = 0;

    for ( auto value : operations ) {
      if ( value[1] == '+' ) {
        count++;
      } else {
        count--;
      }
    }

    return count;
  }
};
```

Javascript:

```js
/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function(operations) {
  let count = 0

  for ( let i = 0; i < operations.length; i++ ) {
    if ( operations[i][1] === '-' ) {
      count--
    } else {
      count++
    }
  }

  return cnt
};
```

Go:

```go

```
