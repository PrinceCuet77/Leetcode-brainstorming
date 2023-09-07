Problem Name: [Subrectangle Queries](https://leetcode.com/problems/subrectangle-queries/)

Problem #1476

Difficulty: `Medium`

Cpp:

```cpp
class SubrectangleQueries {
  vector < vector < int > > result;
public:
  SubrectangleQueries(vector<vector<int>>& rectangle) {
    result = rectangle;
  }
    
  void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
    for ( int i = row1; i <= row2; i++ ) {
      for ( int j = col1; j <= col2; j++ ) {
        result[i][j] = newValue;
      }
    }
  }
    
  int getValue(int row, int col) {
    return result[row][col];
  }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */
```
