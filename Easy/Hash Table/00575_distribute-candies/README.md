Problem Name: [Distribute Candies](https://leetcode.com/problems/distribute-candies/)

Problem #575

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int distributeCandies(vector<int>& candyType) {
    unordered_set < int > st;
    for ( auto candy : candyType ) st.insert(candy);

    if ( st.size() <= (candyType.size() / 2) ) return st.size();
    else return (int)(candyType.size() / 2);
  }
};
```
