Problem Name: [Build Array from Permutation](https://leetcode.com/problems/build-array-from-permutation/)

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> buildArray(vector<int>& nums) {
  vector < int > result;

  for ( auto value : nums ) {
    result.push_back(nums[value]);
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
var buildArray = function(nums) {
  let result = []
    
  for ( let i = 0; i < nums.length; i++ ) {
    result.push(nums[nums[i]])
  }
    
  return result
};
```

Go:

```go
func buildArray(nums []int) []int {
    result := []int{}
    
    for i := 0; i < len(nums); i++ {
        result = append(result, nums[nums[i]])
    }
    
    return result
}
```
