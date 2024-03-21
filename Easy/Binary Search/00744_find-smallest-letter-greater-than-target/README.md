Problem Name: [Find Smallest Letter Greater Than Target](https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/)

Problem #744

Tag: `Binary Search` `Array`

Difficulty: `Easy`

## Cpp

```cpp
class Solution {
public:
  char nextGreatestLetter(vector<char>& letters, char target) {
    auto letter = upper_bound(letters.begin(), letters.end(), target);
    if ( letter == letters.end() ) return letters[0];
    return *letter;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>As array is already sorted, just use lower bound</li>
>   <li>If found out return that letter otherwise return the first letter</li>
> </details>
