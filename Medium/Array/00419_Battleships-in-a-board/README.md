Problem Name: [Battleships in a Board](https://leetcode.com/problems/battleships-in-a-board/)

Problem #419

Tag: `Array` `Depth-First Search` `Matrix`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
  vector < int > dx = {-1, 1, 0, 0};
  vector < int > dy = {0, 0, -1, 1};

  void battleShip(int row, int col, vector < vector < char > >& board) {
    if ( row < 0 || col < 0 || row >= board.size() || col >= board[row].size() ) return;
    if ( board[row][col] == '.' ) return;

    board[row][col] = '.';

    for ( int i = 0; i < 4; i++ ) {
      battleShip(row + dx[i], col + dy[i], board);
    }
  }

public:
  int countBattleships(vector<vector<char>>& board) {
    int count = 0;
    for ( int i = 0; i < board.size(); i++ ) {
      for ( int j = 0; j < board[i].size(); j++ ) {
        if ( board[i][j] == 'X' ) {
          count++;
          battleShip(i, j, board);
        }
      }
    }

    return count;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Traverse the given <code>board</code></li>
>   <li>Use Depth-first Search over the 2d board & cound the frequencies</li>
> </details>
