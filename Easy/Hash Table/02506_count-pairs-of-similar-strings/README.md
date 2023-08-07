Problem Name: [Count Pairs Of Similar Strings](https://leetcode.com/problems/count-pairs-of-similar-strings/)

Problem #2506

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int similarPairs(vector<string>& words) {
    vector < string > store;
    for ( auto word : words ) {
      set < char > st;
      for ( auto ch : word ) st.insert(ch);

      string str = "";
      for ( auto s : st ) str += s;

      store.push_back(str);
    }

    int n = store.size();
    int count = 0;
    for ( int i = 0; i < n; i++ ) {
      for ( int j = i + 1; j < n; j++ ) {
        if ( store[i] == store[j] ) count++;
      }
    }

    return count;
  }
};
```
