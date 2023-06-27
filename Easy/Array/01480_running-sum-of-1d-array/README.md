Problem Name: [Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/)

Problem #1480

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> runningSum(vector<int>& nums) {
    vector < int > result;

    result.push_back(nums[0]);
    for ( int i = 0; i < nums.size() - 1; i++ ) {
      result.push_back(result[i] + nums[i+1]);
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
var runningSum = function (nums) {
  let result = []

  result.push(nums[0])
  for (let i = 0; i < nums.length - 1; i++) {
    result.push(result[i] + nums[i + 1])
  }

  return result
}
```

Go:

```go

```
