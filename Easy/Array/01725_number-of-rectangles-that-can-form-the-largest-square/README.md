Problem Name: [Number Of Rectangles That Can Form The Largest Square](https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/)

Problem #1725

Difficulty: `Easy`

Cpp:

For the first time, I solve with time complexity: `O(klogn)`

```cpp
class Solution {
public:
  int countGoodRectangles(vector<vector<int>>& rectangles) {
    map < int, int > mp;
    for ( auto rectangle : rectangles ) {
      int square = min(rectangle[0], rectangle[1]);
      mp[square]++;
    }

    int result, largest = INT_MIN;
    for ( auto value : mp ) {
      if ( largest < value.first ) {
        result = value.second;
        largest = value.first;
      }
    }

    return result;
};
```

But, I can optimize with time complexity: `O(n)`

```cpp
class Solution {
public:
  int countGoodRectangles(vector<vector<int>>& rectangles) {
    int largest = min(rectangles[0][0], rectangles[0][1]);
    int count = 0;

    for ( auto rectangle : rectangles ) {
      int small = min(rectangle[0], rectangle[1]);

      if ( largest == small ) count++;
      else if ( largest < small ) {
        count = 1;
        largest = small;
      }
    }

    return count;
};
```
