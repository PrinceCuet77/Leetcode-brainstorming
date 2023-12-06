Problem Name: [Partition Array According to Given Pivot](https://leetcode.com/problems/partition-array-according-to-given-pivot/description/)

Problem #2161

Tag: `Array` `Two Pointer`

Difficulty: `Easy`

## Cpp

```cpp
class Solution {
public:
  vector<int> pivotArray(vector<int>& nums, int pivot) {
    int sm = 0, eq = 0;
    for ( int num : nums ) {
      if ( num < pivot ) sm++;
      else if ( num == pivot ) eq++;
    }

    vector < int > result(sm);
    for ( int i = 0; i < eq; i++ ) result.push_back(pivot);

    int it = 0;
    for ( int num : nums ) {
      if ( num < pivot ) result[it++] = num;
      else if ( num > pivot ) result.push_back(num);
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Count small & equal numbers compare with <code>pivot</code></li>
  <li>Take a <code>vector</code> equal of small numbers size</li>
  <li>Add all equal numbers compared with <code>pivot</code> at last</li>
  <li>Then, traverse the array again</li>
  <li>If found out small number, store it from start</li>
  <li>If found out greater number, push it at last</li>
</details>
