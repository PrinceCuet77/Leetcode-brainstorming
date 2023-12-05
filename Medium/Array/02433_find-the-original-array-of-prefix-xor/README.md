Problem Name: [Find The Original Array of Prefix Xor](https://leetcode.com/problems/find-the-original-array-of-prefix-xor/)

Problem #2433

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  vector<int> findArray(vector<int>& pref) {
    int n =  pref.size(), x = pref[0];
    for ( int i = 1; i < n; i++ ) {
      pref[i] = pref[i] ^ x;
      x = pref[i] ^ x;
    }

    return pref;
  }
};
```
