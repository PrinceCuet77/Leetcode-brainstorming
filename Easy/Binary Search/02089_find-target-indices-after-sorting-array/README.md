Problem Name: [Find Target Indices After Sorting Array](https://leetcode.com/problems/find-target-indices-after-sorting-array/)

Problem #2089

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> targetIndices(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    
    int lower = lowerBound(nums, 0, nums.size() - 1, target);
    if ( lower < nums.size() && nums[lower] == target ) {
      int upper = upperBound(nums, 0, nums.size() - 1, target);
      
      if ( lower == upper ) return {lower};

      vector < int > result;
      for ( int i = lower; i <= upper; i++ ) result.push_back(i);
      
      return result;
    }

    return {};
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

  int upperBound(vector < int >& nums, int low, int high, int target ) {
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
