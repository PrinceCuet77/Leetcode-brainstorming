Problem Name: [Guess Number Higher or Lower](https://leetcode.com/problems/guess-number-higher-or-lower/)

Problem #374

Difficulty: `Easy`

Cpp:

```cpp
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
  int guessNumber(int n) {
    int mid, low = 1, high = n;
    while ( low <= high ) {
      mid = low + (high - low) / 2;
      if ( guess(mid) == 0 ) break;
      else if ( guess(mid) == -1 ) high = mid - 1;
      else low = mid + 1;
    }

    return mid;
  }
};
```
