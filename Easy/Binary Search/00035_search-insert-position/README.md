Problem Name: [Search Insert Position](https://leetcode.com/problems/search-insert-position/)

Problem #35

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int searchInsert(vector<int>& nums, int target) {
    return lowerBound(nums, 0, nums.size() - 1, target);

    // Alternate Solution using built-in function
    // return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
  }

  int lowerBound(vector < int >& nums, int low, int high, int target) {
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
