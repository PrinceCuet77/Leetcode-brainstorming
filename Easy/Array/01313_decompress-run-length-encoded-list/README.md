Problem Name: [Decompress Run-Length Encoded List](https://leetcode.com/problems/decompress-run-length-encoded-list/)

Problem #1313

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> decompressRLElist(vector<int>& nums) {
    vector < int > result;

    for ( int i = 0; i < nums.size(); i += 2 ) {
      int freq = nums[i];
      int val = nums[i+1];
      for ( int j = 0; j < freq; j++ ) {
        result.push_back(val);
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
 * @return {number[]}
 */
var decompressRLElist = function (nums) {
  let result = []

  for (let i = 0; i < nums.length; i += 2) {
    for (let j = 0; j < nums[i]; j++) {
      result.push(nums[i + 1])
    }
  }

  return result
}
```
