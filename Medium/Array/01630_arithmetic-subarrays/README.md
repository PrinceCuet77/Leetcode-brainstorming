Problem Name: [Arithmetic Subarrays](https://leetcode.com/problems/arithmetic-subarrays/description/)

Problem #1630

Tag: `Array` `Sorting`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
  bool compare(vector < int >& vec) {
    sort(vec.begin(), vec.end());

    int diff = vec[1] - vec[0];
    for ( int j = 1; j < vec.size()-1; j++ ) {
      if ( vec[j+1] - vec[j] != diff ) return false;
    }

    return true;
  }

public:
  vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
    vector < bool > result;
    for ( int i = 0; i < l.size(); i++ ) {
      vector < int > tmp(nums.begin()+l[i], nums.begin()+r[i]+1);
      result.push_back(compare(tmp));
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Assign a different <code>vector</code> based on <code>l</code> & <code>r</code> ranges</li>
  <li>Sort & check arithmetic property</li>
</details>
