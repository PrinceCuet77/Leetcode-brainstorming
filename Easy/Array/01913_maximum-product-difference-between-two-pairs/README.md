Problem Name: [Maximum Product Difference Between Two Pairs](https://leetcode.com/problems/maximum-product-difference-between-two-pairs/)

Problem #1913

Difficulty: `Easy`

Cpp:

This solution takes space complexity: `O(nlogn)`

```cpp
class Solution {
public:
  int maxProductDifference(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    return abs((nums[0] * nums[1]) - (nums[nums.size() - 2] * nums[nums.size() - 1]));
  }
};
```

Alternate Solution (Better): Time complexity: `O(n)`

```cpp
class Solution {
public:
  int maxProductDifference(vector<int>& nums) {
    int firstMax = INT_MIN, secondMax = INT_MIN, firstMin = INT_MAX, secondMin = INT_MAX;

    for ( auto num : nums ) {
      if ( num > firstMax ) {
        secondMax = firstMax;
        firstMax = num;
      } else if ( num > secondMax ) {
        secondMax = num;
      }

      if ( num < firstMin ) {
        secondMin = firstMin;
        firstMin = num;
      } else if ( num < secondMin ) {
        secondMin = num;
      }
    }

    return firstMax * secondMax - firstMin * secondMin;
  }
};
```