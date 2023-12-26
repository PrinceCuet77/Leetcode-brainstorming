Problem Name: [Queens That Can Attack the King](https://leetcode.com/problems/queens-that-can-attack-the-king/description/)

Problem #1222

Tag: `Array` `Matrix` `Simulation`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
    map < pair < int, int >, int > mp;
    for ( int i = 0; i < queens.size(); i++ ) {
      mp[{queens[i][0], queens[i][1]}]++;
    }

    vector < vector < int > > result;
    int xKing = king[0], yKing = king[1];

    // Right
    for ( int i = yKing+1; i < 8; i++ ) {
      if ( mp[{xKing, i}] ) {
        vector < int > v = {xKing, i};
        result.push_back(v);
        break;
      }
    }

    // Left
    for ( int i = yKing-1; i >= 0; i-- ) {
      if ( mp[{xKing, i}] ) {
        vector < int > v = {xKing, i};
        result.push_back(v);
        break;
      }
    }

    // Top
    for ( int i = xKing-1; i >= 0; i-- ) {
      if ( mp[{i, yKing}] ) {
        vector < int > v = {i, yKing};
        result.push_back(v);
        break;
      }
    }

    // Down
    for ( int i = xKing+1; i < 8; i++ ) {
      if ( mp[{i, yKing}] ) {
        vector < int > v = {i, yKing};
        result.push_back(v);
        break;
      }
    }

    // Top-Left
    for ( int i = xKing-1, j = yKing-1; i >= 0 && j >= 0; i--, j-- ) {
      if ( mp[{i, j}] ) {
        vector < int > v = {i, j};
        result.push_back(v);
        break;
      }
    }

    // Bottom-Right
    for ( int i = xKing+1, j = yKing+1; i < 8 && j < 8; i++, j++ ) {
      if ( mp[{i, j}] ) {
        vector < int > v = {i, j};
        result.push_back(v);
        break;
      }
    }

    // Top-Right
    for ( int i = xKing-1, j = yKing+1; i >= 0 && j < 8; i--, j++ ) {
      if ( mp[{i, j}] ) {
        vector < int > v = {i, j};
        result.push_back(v);
        break;
      }
    }

    // Bottom-Left
    for ( int i = xKing+1, j = yKing-1; i < 8 && j >= 0; i++, j-- ) {
      if ( mp[{i, j}] ) {
        vector < int > v = {i, j};
        result.push_back(v);
        break;
      }
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Store all queen position in a <code>map</code></li>
<li>Traverse right, left, top, bottom, top-left, top-right, bottom-left & bottom-right</li>
</details>
