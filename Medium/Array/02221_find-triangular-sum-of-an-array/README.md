Problem Name: [Find Triangular Sum of an Array](https://leetcode.com/problems/find-triangular-sum-of-an-array/description/)

Problem #2221

Tag: `Array` `Math` `Simulation` `Combinatorics`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  int triangularSum(vector<int>& nums) {
    int n = nums.size();
    for ( int k = n; k > 0; k-- ) {
      for ( int i = 0, in = 0; i < k-1; i++ ) {
        nums[in++] = (nums[i] + nums[i+1]) % 10;
      }
    }

    return nums[0];
  }
};
```

<details>
  <summary>Note</summary>
  <li>Outer loop will continue <code>n-1</code> times from <code>n</code> to <code>0</code> which denotes as <code>k</code></li>
  <li>Inner loop will continue from <code>0</code> to <code>k-1</code></li>
  <li>For iteration, continue mentioned operation and store result in same <code>vector</code></li>
</details>
