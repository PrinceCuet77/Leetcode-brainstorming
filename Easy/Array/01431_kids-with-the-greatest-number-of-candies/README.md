Problem Name: [Kids With the Greatest Number of Candies
](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/)

Problem #1431

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector < bool > result;

    int maxCandy = -1;
    for ( auto candy : candies ) {
      maxCandy = maxCandy < candy ? candy : maxCandy;
    }

    for ( auto candy : candies ) {
      bool maxOrNot = candy + extraCandies >= maxCandy ? true : false;
      result.push_back(maxOrNot);
    }

    return result;
  }
};
```

Javascript:

```js

```

Go:

```go

```
