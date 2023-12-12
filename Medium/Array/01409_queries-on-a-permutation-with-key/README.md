Problem Name: [Queries on a Permutation With Key](https://leetcode.com/problems/queries-on-a-permutation-with-key/description/)

Problem #1409

Tag: `Array` `Binary Indexed Tree` `Simulation`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  vector<int> processQueries(vector<int>& queries, int m) {
    vector < int > p;
    for ( int i = 1; i <= m; i++ ) p.push_back(i);

    for ( int i = 0; i < queries.size(); i++ ) {
      int val = queries[i];
      auto it = find(p.begin(), p.end(), val);
      queries[i] = it - p.begin();

      p.erase(it);
      p.insert(p.begin(), val);
    }

    return queries;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Find <code>queries[i]</code> in the permutation array</li>
  <li>Calculate position</li>
  <li>Erase <code>queries[i]</code> from the permutation array</li>
  <li>Insert <code>queries[i]</code> at the beginning of permutation array</li>
</details>
