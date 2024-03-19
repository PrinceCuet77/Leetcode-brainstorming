Problem Name: [Fair Candy Swap](https://leetcode.com/problems/fair-candy-swap/description/)

Problem #888

Tag: `Binary Search` `Array` `Hash Table` `Sorting`

Difficulty: `Easy`

## Cpp

```cpp
class Solution {
public:
  vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
    int totalA = 0, totalB = 0;
    for ( int alice : aliceSizes) totalA += alice;
    for ( int bob : bobSizes ) totalB += bob;

    int need = (totalA - totalB) / 2;

    set < int > st;
    for ( int alice : aliceSizes ) st.insert(alice - need);

    for ( int bob : bobSizes ) {
      if ( st.find(bob) != st.end() ) return  {bob + need, bob};
    }

    return {};
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Calculate the total of <code>aliceSizes</code> & <code>bobSizes</code></li>
>   <li>Find out their average need</li>
>   <li>Store exchangable sizes for alice in <code>set</code></li>
>   <li>Find that size in bob, if found out then fix their sizes and return it</li>
>   <li>Else return empty <code>vector</code></li>
> </details>
