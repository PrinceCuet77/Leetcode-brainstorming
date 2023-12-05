Problem Name: [Sort the Students by Their Kth Score](https://leetcode.com/problems/sort-the-students-by-their-kth-score/)

Problem #2545

Tag: `Array` `Sorting` `Matrix`

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
    vector < vector < int > > result;
    map < int, int > mp;
    for ( int i = 0; i < score.size(); i++ ) {
      mp[score[i][k]] = i;
    }

    for ( auto it = mp.rbegin(); it != mp.rend(); it++ ) {
      result.push_back(score[it->second]);
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Store <code>k-th</code> column's value & it's corresponding index in the <code>map</code></li>
  <li>Store it another <code>vector</code> according the sorted <code>map</code></li>
</details>
