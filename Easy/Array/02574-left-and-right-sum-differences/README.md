Problem Name: [Left and Right Sum Differences](https://leetcode.com/problems/left-and-right-sum-differences/)

Problem #2574

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> leftRightDifference(vector<int>& nums) {
    int leftSum = 0, rightSum = 0;
    for ( int i = nums.size() - 1; i > 0; i-- ) {
      rightSum += nums[i];
    }

    vector < int > result;
    result.push_back(abs(leftSum - rightSum));
    for ( int i = 0; i < nums.size() - 1; i++ ) {
      leftSum += nums[i];
      rightSum -= nums[i+1];
      result.push_back(abs(leftSum - rightSum));
    }

    return result;
  }
};
```

Javascript:

```js
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var leftRightDifference = function(nums) {
  let leftSum = 0, rightSum = 0
  for ( let i = nums.length - 1; i > 0; i-- ) {
    rightSum += nums[i]
  }

  let result = []
  result.push(Math.abs(leftSum - rightSum))
  for ( let i = 0; i < nums.length - 1; i++ ) {
    leftSum += nums[i]
    rightSum -= nums[i+1]
    result.push(Math.abs(leftSum - rightSum))
  }

  return result
};
```

Go:

```go

```
