Problem Name: [Remove Letter To Equalize Frequency](https://leetcode.com/problems/remove-letter-to-equalize-frequency/description/)

Problem #2423

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool equalFrequency(string word) {
    vector < int > store(26, 0);
    for ( auto ch : word ) {
      store[ch - 'a']++;
    }

    for ( int i = 0; i < 26; i++ ) {
      if ( store[i] == 0 ) continue;

      vector < int > temp = store;
      temp[i]--;

      unordered_set < int > st;
      for ( auto tmp : temp ) {
        if ( tmp > 0 ) st.insert(tmp);
      }

      if ( st.size() == 1 ) return true;
    }

    return false;
  }
};
```