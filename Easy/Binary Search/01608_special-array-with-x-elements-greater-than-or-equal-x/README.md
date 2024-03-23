Problem Name: [Special Array With X Elements Greater Than or Equal X](https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/description/)

Problem #1608

Tag: `Binary Search` `Array` `Sorting`

Difficulty: `Easy`

## Cpp

```cpp
class Solution {
public:
  int specialArray(vector<int>& nums) {
    int arr[1001] = {0};

    for ( int num : nums ) arr[num]++;

    int total = nums.size();
    for ( int i = 0; i < 1001; i++ ) {
      if ( i == total ) return i;
      total -= arr[i];
    }

    return -1;
  }
};
```

> [!NOTE]
>
> <details>
>   <li></li>
>   <li></li>
> </details>
