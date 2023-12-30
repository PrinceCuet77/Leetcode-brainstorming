Problem Name: [Minimum Suffix Flips](https://leetcode.com/problems/minimum-suffix-flips/description/)

Problem #1529

Tag: `String` `Greedy`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  int minFlips(string target) {
    int count = 0;
    char pivot = '0';
    for ( char ch : target ) {
      if ( ch != pivot ) {
        pivot = ch;
        count++;
      }
    }

    return count;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Track mismatch & increase <code>count</code></li>
</details>
