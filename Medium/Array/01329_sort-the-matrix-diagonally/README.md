Problem Name: [Sort the Matrix Diagonally](https://leetcode.com/problems/sort-the-matrix-diagonally/description/)

Problem #1329

Tag: `Array` `Sorting` `Matrix`

Difficulty: `Medium`

## Cpp (Efficient)

```cpp
class Solution {
public:
  vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
    vector < int > vec;
    int n = mat.size(), m = mat[0].size();
    for ( int k = 0; k < n; k++ ) {
      vec.clear();
      for ( int i = k, j = 0; i < n && j < m; i++, j++ ) vec.push_back(mat[i][j]);
      sort(vec.begin(), vec.end());
      for ( int i = k, j = 0; i < n && j < m; i++, j++ ) mat[i][j] = vec[j];
    }

    for ( int k = 1; k < m; k++ ) {
      vec.clear();
      for ( int i = 0, j = k; i < n && j < m; i++, j++ ) vec.push_back(mat[i][j]);
      sort(vec.begin(), vec.end());
      for ( int i = 0, j = k; i < n && j < m; i++, j++ ) mat[i][j] = vec[i];
    }

    return mat;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Diagonally store in <code>vector</code></li>
  <li>Sort & re-store</li>
</details>

## Cpp (Less Efficient)

```cpp
class Solution {
public:
  vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
    unordered_map < int, priority_queue < int, vector < int >, greater < int > > > mp;
    for ( int i = 0; i < mat.size(); i++ ) {
      for ( int j = 0; j < mat[i].size(); j++ ) {
        mp[i-j].push(mat[i][j]);
      }
    }

    for ( int i = 0; i < mat.size(); i++ ) {
      for ( int j = 0; j < mat[i].size(); j++ ) {
        mat[i][j] = mp[i-j].top();
        mp[i-j].pop();
      }
    }

    return mat;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Find all diagonal elements based on <code>i-j</code></li>
  <li>Store in <code>priority_queue</code> & re-store</li>
</details>

## Cpp (Less Less Efficient)

```cpp
class Solution {
public:
  vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
    multiset < int > st;
    int n = mat.size(), m = mat[0].size();
    for ( int k = 0; k < n; k++ ) {
      st.clear();
      for ( int i = k, j = 0; i < n && j < m; i++, j++ ) st.insert(mat[i][j]);
      auto it = st.begin();
      for ( int i = k, j = 0; i < n && j < m; i++, j++, it++ ) mat[i][j] = *it;
    }

    for ( int k = 1; k < m; k++ ) {
      st.clear();
      for ( int i = 0, j = k; i < n && j < m; i++, j++ ) st.insert(mat[i][j]);
      auto it = st.begin();
      for ( int i = 0, j = k; i < n && j < m; i++, j++, it++ ) mat[i][j] = *it;
    }

    return mat;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Find all diagonal elements based on <code>i-j</code></li>
  <li>Store in <code>multiset</code> & re-store</li>
</details>
