Problem Name: [Find the Prefix Common Array of Two Arrays](https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/description/)

Problem #2657

Tag: `Array` `Hash Table`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    vector < int > result, store(A.size()+1, 0);
    int count = 0;
    for ( int i = 0; i < A.size(); i++ ) {
      store[A[i]]++;
      if ( store[A[i]] == 2 ) count++;

      store[B[i]]++;
      if ( store[B[i]] == 2 ) count++;

      result.push_back(count);
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Use <code>vector</code> as a hash table</li>
  <li>Traverse <code>A</code> & <code>B</code> and store frequency in <code>vector</code></li>
  <li>If frequency touches <code>2</code>, increase <code>count</code> by <code>1</code></li>
  <li>Store frequency for every element</li>
  <li>Store another <code>vector</code></li>
</details>
