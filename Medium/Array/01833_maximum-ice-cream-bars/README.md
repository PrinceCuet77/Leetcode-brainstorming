Problem Name: [Maximum Ice Cream Bars](https://leetcode.com/problems/maximum-ice-cream-bars/description/)

Problem #1833

Tag: `Array` `Greedy` `Sorting`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(), costs.end());

    int count = 0;
    for ( auto cost : costs ) {
      if ( cost <= coins ) {
        count++;
        coins -= cost;
      } else {
        break;
      }
    }

    return count;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Sorting</li>
  <li>Increase result by checking <code>cost <= coins</code></li>
</details>
