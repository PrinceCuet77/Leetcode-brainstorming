Problem Name: [Create Target Array in the Given Order](https://leetcode.com/problems/create-target-array-in-the-given-order/)

Problem #1389

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector < int > result;

    int n = nums.size();
    for ( int i = 0; i < n; i++ ) {
      if ( result.size() == index[i] ) {
        result.push_back(nums[i]);
      } else {
        result.push_back(0);
        for ( int j = result.size() - 1; j > index[i]; j-- ) {
          result[j] = result[j - 1];
        }
        result[index[i]] = nums[i];
      }
    }

    return result;
  }
};
```

Javascript:

```js
/**
 * @param {number[]} nums
 * @param {number[]} index
 * @return {number[]}
 */
var createTargetArray = function (nums, index) {
  let result = []

  let n = nums.length
  for (let i = 0; i < n; i++) {
    if (result.length == index[i]) {
      result.push(nums[i])
    } else {
      result.push(0)
      for (let j = result.length - 1; j > index[i]; j--) {
        result[j] = result[j - 1]
      }
      result[index[i]] = nums[i]
    }
  }

  return result
}
```
