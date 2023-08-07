Problem Name: [Count Largest Group](https://leetcode.com/problems/count-largest-group/)

Problem #1399

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  int countLargestGroup(int n) {
    vector < int > store(37,0);
    for ( int i = 1; i <= n; i++ )
      store[digitSum(i)]++;

    int count = 0;
    auto maxValue = *max_element(store.begin(), store.end());
    for ( auto value : store ) {
      if ( value == maxValue ) count++;
    }

    return count;
  }

  int digitSum(int n) {
    int sum = 0;
    while( n ) {
      sum += n % 10;
      n /= 10;
    }

    return sum;
  }
};
```
