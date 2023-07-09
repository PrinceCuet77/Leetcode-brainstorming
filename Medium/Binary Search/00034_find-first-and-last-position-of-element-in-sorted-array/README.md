Problem Name: [Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

Problem #34

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  vector<int> searchRange(vector<int>& nums, int target) {
    int lower = lowerBound(nums, 0, nums.size() - 1, target);

    if ( lower < nums.size() && nums[lower] == target) {
      int upper = upperBound(nums, 0, nums.size() - 1, target);
      return {lower, upper};
    }

    return {-1, -1};
  }

  int lowerBound(vector <int >& nums, int low, int high, int target) {
    while ( low <= high ) {
      int mid = low + (high - low) / 2;
      if ( nums[mid] == target ) high = mid - 1;
      else if ( nums[mid] > target ) high = mid - 1;
      else low = mid + 1;
    }

    return low;
  }

  int upperBound(vector <int >& nums, int low, int high, int target) {
    while ( low <= high ) {
      int mid = low + (high - low) / 2;
      if ( nums[mid] == target ) low = mid + 1;
      else if ( nums[mid] > target ) high = mid - 1;
      else low = mid + 1;
    }

    return high;
  }
};
```

Method 02: `Using lowerBound function`

```cpp
class Solution {
public:
  vector<int> searchRange(vector<int>& nums, int target) {
    int lower = lowerBound(nums, 0, nums.size() - 1, target);

    if ( lower < nums.size() && nums[lower] == target) {
      int upper = lowerBound(nums, 0, nums.size() - 1, target + 1) - 1;
      return {lower, upper};
    }

    return {-1, -1};
  }

  int lowerBound(vector <int >& nums, int low, int high, int target) {
    while ( low <= high ) {
      int mid = low + (high - low) / 2;
      if ( nums[mid] == target ) high = mid - 1;
      else if ( nums[mid] > target ) high = mid - 1;
      else low = mid + 1;
    }

    return low;
  }
};
```
