Problem Name: [Longest Subsequence With Limited Sum](https://leetcode.com/problems/longest-subsequence-with-limited-sum/description/)

Problem #2389

Tag: `Binary Search` `Array` `Greedy` `Sorting` `Prefix Sum`

Difficulty: `Easy`

## Cpp

```cpp
class Solution {
public:
  vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    sort(nums.begin(), nums.end());
    for ( int i = 1; i < nums.size(); i++ ) nums[i] += nums[i-1];

    vector < int > result;
    for ( auto q : queries ) {
      int pos = upper_bound(nums.begin(), nums.end(), q) - nums.begin();
      result.push_back(pos);
    }

    return result;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Sort & calculate prefix sum</li>
>   <li>Find upper bound & calculate the position & store it in <code>vector</code></li>
>   <li>Return the <code>vector</code></li>
> </details>
