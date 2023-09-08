Problem Name: [Final Prices With a Special Discount in a Shop](https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/)

Problem #1475

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<int> finalPrices(vector<int>& prices) {
    int n = prices.size();
    for ( int i = 0; i < n; i++ ) {
      for ( int j = i+1; j < n; j++ ) {
        if ( prices[i] >= prices[j] ) {
          prices[i] -= prices[j];
          break;
        }
      }
    }

    return prices;
  }
};
```
