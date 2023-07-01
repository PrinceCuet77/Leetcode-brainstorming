Problem Name: [Neither Minimum nor Maximum](https://leetcode.com/problems/neither-minimum-nor-maximum/)

Problem #2733

Difficulty: `Easy`

Cpp:

Time complexity: `O(n)`

```cpp
class Solution {
public:
  int findNonMinOrMax(vector<int>& nums) {
    int maxValue = INT_MIN, minValue = INT_MAX;
    for ( auto num : nums ) {
      maxValue = max(maxValue, num);
      minValue = min(minValue, num);
    }

    int result = -1;
    for ( auto num : nums ) {
      if ( num != maxValue && num != minValue) {
        result = num;
        break;
      }
    }

    return result;
  }
};
```

But I can solve `O(1)` time complexity.

```cpp
class Solution {
public:
  int findNonMinOrMax(vector<int>& nums) {
    if (nums.size() <= 2) return -1;

    int first = max(nums[0], nums[1]);
    int second = min(nums[0], nums[1]);
    int third = nums[2];

    if ( third < first && third > second ) return third;
    if ( third < second ) return second;
    if ( third > first ) return first;

    return -1;
  }
};
```
