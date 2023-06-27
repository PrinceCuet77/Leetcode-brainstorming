Problem Name: [How Many Numbers Are Smaller Than the Current Number](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/)

Problem #1365

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector < int > result;
    
    map < int, int > mp;
    int n = nums.size();
    for ( int i = 0; i < n; i++ ) {
      int count = 0;
      if ( mp[nums[i]] == 0 ) {
        for ( int j = 0; j < n; j++ ) {
          if ( i != j && nums[i] > nums[j] ) {
            count++;
          }
        }

        result.push_back(count);
        mp[nums[i]] = count;
      } else {
        result.push_back(mp[nums[i]]);
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
var smallerNumbersThanCurrent = function(nums) {
  let result = []

  let mp = new Map()
  for ( let i = 0; i < nums.length; i++ ) {
    let count = 0
    if (mp.get(nums[i]) == undefined ) {
      for ( let j = 0; j < nums.length; j++ ) {
        if ( i != j && nums[i] > nums[j] ) {
          count++;
        }
      }
      
      result.push(count)
      mp.set(nums[i], count)
    } else {
      result.push(mp.get(nums[i]))
    }
  }

  return result
};
```