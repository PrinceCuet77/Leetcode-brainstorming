Problem Name: [Capacity To Ship Packages Within D Days](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/)

Problem #1011

Tag: `Binary Search` `Array`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  int shipWithinDays(vector<int>& weights, int days) {
    int maxW = -1, totalW = 0;
    for ( int weight : weights ) {
      maxW = max(maxW, weight);
      totalW += weight;
    }

    while ( maxW < totalW ) {
      int midW = maxW + (totalW - maxW) / 2;

      int day = 1, w = 0;
      for ( int weight : weights ) {
        if ( w + weight > midW ) {
          day++;
          w = 0;
        }
        w += weight;
      }

      if ( day > days ) maxW = midW + 1;
      else totalW = midW;
    }

    return maxW;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Find total weight & max weight</li>
>   <li>Adjust low as max weight & high as total weight</li>
>   <li>Using binary search, adjust to match need new days</li>
>   <li>If new need days are equal to given days, then return max weight</li>
> </details>
