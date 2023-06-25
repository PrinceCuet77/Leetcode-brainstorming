Problem Name: [Concantenation of Array](https://leetcode.com/problems/concatenation-of-array/)

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> getConcatenation(vector<int>& nums) {
  vector < int > result;

    for ( auto x : nums ) {
      result.push_back(x);
    }

    for ( auto x : nums ) {
      result.push_back(x);
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
var getConcatenation = function(nums) {
    return [...nums, ...nums]
};
```

Go:

```go
func getConcatenation(nums []int) []int {
  var result []int = []int{}

  for i := 0; i < len(nums); i++ {
    result = append(result, nums[i])
  }

  for i := 0; i < len(nums); i++ {
    result = append(result, nums[i])
  }

  return result
}
```
