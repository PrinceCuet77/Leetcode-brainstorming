Problem Name: [Convert an Array Into a 2D Array With Conditions](https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/)

Problem #2610

Tag: `Array` `Hash Table`

Difficulty: `Easy`

## Cpp

```cpp
class Solution {
public:
  vector<vector<int>> findMatrix(vector<int>& nums) {
    unordered_map < int, int > mp;
    int maxVal = -1;
    for ( int num : nums ) {
      mp[num]++;
      maxVal = max(mp[num], maxVal);
    }

    vector < vector < int > > result;
    for ( int i = 0; i < maxVal; i++ ) {
      vector < int > v;
      for ( auto m : mp ) {
        if ( m.second > 0 ) {
          v.push_back(m.first);
          mp[m.first]--;
        }
      }
      result.push_back(v);
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Using <code>unordered_map</code>, find how many rows & column will take</li>
  <li>According that, organize the the 2D array</li>
</details>
