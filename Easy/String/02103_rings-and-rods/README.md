Problem Name: [Rings and Rods](https://leetcode.com/problems/rings-and-rods/)

Problem #2103

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int countPoints(string rings) {
    set < int > st[10];
    for ( int i = 0; i < rings.size(); i += 2 ) {
      st[rings[i+1]-'0'].insert(rings[i]);
    }

    int result = 0;
    for ( int i = 0; i < 10; i++ ) {
      result = st[i].size() == 3 ? result+1 : result;
    }

    return result;
  }
};
```
