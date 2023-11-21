Problem Name: [Delete Columns to Make Sorted](https://leetcode.com/problems/delete-columns-to-make-sorted/)

Problem #944

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int minDeletionSize(vector<string>& strs) {
    int result = 0;
    for ( int i = 0; i < strs[0].size(); i++ ) {
      int val = -1;
      for ( int j = 0; j < strs.size(); j++ ) {
        int val2 = strs[j][i] - 'a';
        if ( val > val2 ){
          result++;
          break;
        } else val = val2;
      }
    }

    return result;
  }
};
```
