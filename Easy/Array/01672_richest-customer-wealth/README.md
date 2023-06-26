Problem Name: [Richest Customer Wealth](https://leetcode.com/problems/richest-customer-wealth/)

Problem #1672

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int maximumWealth(vector<vector<int>>& accounts) {
    int maxWealth = 0;

    for ( auto customer : accounts ) {
      int totalMoney = 0;
      for ( auto money : customer ) {
        totalMoney += money;
      }

      maxWealth = maxWealth < totalMoney ? totalMoney : maxWealth;
    }

    return maxWealth;
  }
};
```

Javascript:

```js
/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
  let maxWealth = 0

  for ( let i = 0; i < accounts.length; i++ ) {
    let totalMoney = 0
    for ( let j = 0; j < accounts[i].length; j++ ) {
      totalMoney += accounts[i][j]
    }

    maxWealth = maxWealth < totalMoney ? totalMoney : maxWealth
  }

  return maxWealth
};
```

Go:

```go
func maximumWealth(accounts [][]int) int {
  maxWealth := 0

  for _, customer := range accounts {
    totalMoney := 0
    for _, money := range customer {
      totalMoney += money
    }

    if maxWealth < totalMoney {
      maxWealth = totalMoney
    }
  }

  return maxWealth
}
```
