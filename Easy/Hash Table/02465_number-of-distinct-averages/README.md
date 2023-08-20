Problem Name: [Number of Distinct Averages](https://leetcode.com/problems/number-of-distinct-averages/description/)

Problem #2465

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int distinctAverages(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    unordered_set < double > st;
    for ( int i = 0; i < n; i++ ) {
      double avg = (double)(nums[i] + nums[n - i -1]) / 2;
      st.insert(avg);
    }

    return st.size();
  }
};
```
