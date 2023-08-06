Problem Name: [Keep Multiplying Found Values by Two](https://leetcode.com/problems/keep-multiplying-found-values-by-two/)

Problem #2154

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int findFinalValue(vector<int>& nums, int original) {
    bool flag = true;

    int n = nums.size();
    while ( flag ) {
      int i = 0;
      for ( i = 0; i < n; i++) {
        if(nums[i] == original) { 
          original *= 2; 
          break;
        }
      }
      
      if ( i == n )
        flag = false;
    }
    
    return original;
  }
};
```
