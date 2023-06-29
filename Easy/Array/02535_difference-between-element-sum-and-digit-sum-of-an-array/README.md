Problem Name: [Difference Between Element Sum and Digit Sum of an Array](https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/)

Problem #2535

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int differenceOfSum(vector<int>& nums) {
    int sum = 0, digitSum = 0;

    for ( auto num : nums ) {
      sum += num;
      while ( num > 0 ) {
        digitSum += num % 10;
        num /= 10;
      }
    }

    return abs(sum - digitSum);
  }
};
```

Javascript:

```js
/**
 * @param {number[]} nums
 * @return {number}
 */
var differenceOfSum = function (nums) {
  let sum = 0,
    digitSum = 0

  let n = nums.length
  for (let i = 0; i < n; i++) {
    sum += nums[i]
    while (nums[i] > 0) {
      digitSum += nums[i] % 10
      nums[i] = Math.floor(nums[i] / 10)
    }
  }

  return Math.abs(sum - digitSum)
}
```
