Problem Name: [Minimum Number Game](https://leetcode.com/problems/minimum-number-game/description/)

Problem #2874

Tag: `Array` `Sorting` `Heap (Priority Queue)` `Simulation`

Difficulty: `Easy`

## Cpp

```cpp
class Solution {
public:
  vector<int> numberGame(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    vector < int > result;
    for ( int i = 0; i < nums.size(); i += 2 ) {
      result.push_back(nums[i+1]);
      result.push_back(nums[i]);
    }

    return result;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Sort the array</li>
>   <li>Store <code>i + 1</code> element first & then <code>i</code> in the <code>vector</code></li>
> </details>
