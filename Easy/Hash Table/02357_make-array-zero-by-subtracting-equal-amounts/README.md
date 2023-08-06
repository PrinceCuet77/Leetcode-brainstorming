Problem Name: [Make Array Zero by Subtracting Equal Amounts](https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/)

Problem #2357

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int minimumOperations(vector<int>& nums) {
    set < int > st;
    for ( auto num : nums ) {
      if ( num ) st.insert(num);
    }

    return st.size();
  }
};
```
