Problem Name: [Destination City](https://leetcode.com/problems/destination-city/)

Problem #1436

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string destCity(vector<vector<string>>& paths) {
    set < string > st;
    for ( auto path : paths ) {
      st.insert(path[0]);
    }

    string result = "";
    for ( auto path : paths ) {
      if ( st.find(path[1]) == st.end() ) {
        return result = path[1];
      }
    }

    return result;
  }
};
```
