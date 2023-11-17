Problem Name: [Number of Laser Beams in a Bank](https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/)

Problem #2125

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  int numberOfBeams(vector<string>& bank) {
    int result = 0, beam = 0;
    for ( string b : bank ) {
      int count = 0;
      for ( char ch : b ) {
        if ( ch == '1' ) count++;
      }
      result += (beam * count);
      beam = count ? count : beam;
    }


    return result;
  }
};

```
