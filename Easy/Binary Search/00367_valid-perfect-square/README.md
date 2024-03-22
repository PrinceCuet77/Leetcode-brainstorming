Problem Name: [Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/description/)

Problem #367

Tag: `Binary Search` `Math`

Difficulty: `Easy`

## Cpp

```cpp
class Solution {
public:
  bool isPerfectSquare(int num) {
    int i = 1;
    while ( num > 0 ) {
      num = num - i;
      i = i + 2;
    }

    return num == 0;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Use perfect square technique</li>
>   <li><code>1+3+5=9</code> and so on</li>
> </details>
