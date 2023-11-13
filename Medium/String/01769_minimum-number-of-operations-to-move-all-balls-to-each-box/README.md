Problem Name: [Minimum Number of Operations to Move All Balls to Each Box](https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/)

Problem #1769

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  vector<int> minOperations(string boxes) {
    int n = boxes.size();
    vector < int > result, leftCnt(n), leftCost(n), rightCnt(n), rightCost(n);
    for ( int i = 1; i < n; i++ ) {
      if ( boxes[i-1] == '1' ) leftCnt[i] = leftCnt[i-1] + 1;
      else leftCnt[i] = leftCnt[i-1];

      leftCost[i] = leftCost[i-1] + leftCnt[i];
    }

    for ( int i = n-2; i >= 0; i-- ) {
      if ( boxes[i+1] == '1' ) rightCnt[i] = rightCnt[i+1] + 1;
      else rightCnt[i] = rightCnt[i+1];

      rightCost[i] = rightCost[i+1] + rightCnt[i];
    }

    for ( int i = 0; i < n; i++ ) {
      result.push_back(leftCost[i] + rightCost[i]);
    }

    return result;
  }
};
```
