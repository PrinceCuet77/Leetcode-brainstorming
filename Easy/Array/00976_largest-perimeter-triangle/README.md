Problem Name: [Largest Perimeter Triangle](https://leetcode.com/problems/largest-perimeter-triangle/)

Problem #976

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int largestPerimeter(vector<int>& nums) {
    int result = 0, n = nums.size();
    sort(nums.begin(), nums.end());

    int a = nums[0];
    for ( int i = 1; i < n - 1; i++ ) {
      int b = nums[i], c = nums[i+1];
      if ( a + b > c ) {
        result = max(result, a + b + c);
      }
      a = nums[i];
    }

    return result;
  }
};
```
