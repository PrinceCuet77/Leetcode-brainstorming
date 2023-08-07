Problem Name: [Largest Positive Integer That Exists With Its Negative](https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/)

Problem #2441

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int findMaxK(vector<int>& nums) {
    unordered_set < int > st;
    for ( auto n : nums ) st.insert(n);

    int result = -1;
    for ( auto it = st.begin(); it != st.end(); it++ ) {
      if ( st.find(-*it) != st.end() )
        result = max(result, *it);
    }

    return result;
  }
};
```
