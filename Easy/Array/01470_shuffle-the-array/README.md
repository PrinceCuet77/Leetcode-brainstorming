Problem Name: [Shuffle the Array](https://leetcode.com/problems/shuffle-the-array/)

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> shuffle(vector<int>& nums, int n) {
    vector < int > result;

    for ( int i = 0; i < n; i++ ) {
      result.push_back(nums[i]);
      result.push_back(nums[i+n]);
    }

    return result;
  }
};
```

Javascript:

```js
/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function(nums, n) {
  let result = []
    
  for ( let i = 0; i < n; i++ ) {
    result.push(nums[i])
    result.push(nums[i+n])
  }
    
  return result
};
```

Go:

```go
func shuffle(nums []int, n int) []int {
  result := []int{}
    
  for i := 0; i < n; i += 1 {
    result = append(result, nums[i])
    result = append(result, nums[i+n])
  }
    
  return result
}
```
