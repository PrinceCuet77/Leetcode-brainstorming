Problem Name: [Maximum Number of Coins You Can Get](https://leetcode.com/problems/maximum-number-of-coins-you-can-get/description/)

Problem #1561

Tag: `Array` `Math` `Greedy` `Sorting` `Game Theory`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  int maxCoins(vector<int>& piles) {
    sort(piles.begin(), piles.end());

    int index = piles.size() - 2, result = 0;;
    for ( int i = 0; i < piles.size() / 3; i++ ) {
      result += piles[index];
      index -= 2;
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Alice takes maximum number in any triplet</li>
  <li>Bob takes minimum number in any triplet</li>
  <li>Arrange triplet such as I can take 2nd largest number in any triplet</li>
</details>
