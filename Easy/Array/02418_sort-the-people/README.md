Problem Name: [Sort the People](https://leetcode.com/problems/sort-the-people/)

Problem #2418

Difficulty: `Easy`

Cpp: Using map Solution

```cpp
class Solution {
public:
  vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    int n = names.size();
    map < int, string > mp;
    for ( int i = 0; i < n; i++ ) {
      mp[heights[i]] = names[i];
    }

    int i = n - 1;
    for ( auto value : mp ) {
      names[i] = value.second;
      i--;
    }

    return names;
  }
};
```

Cpp: Using vector Solution

```cpp
class Solution {
public:
  vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    int n = names.size();
    vector < pair < int, string > > result;
    for ( int i = 0; i < n; i++ ) {
      result.push_back({heights[i], names[i]});
    }

    // Customize sorting function using lambda function
    sort(result.begin(), result.end(), [&] (pair < int, string> p1, pair < int, string > p2) {
      return p1.first > p2.first;
    });

    // Another method: long to short sorting
    // sort(result.rbegin(), result.rend());

    for ( int i = 0; i < n; i++ ) {
      names[i] = result[i].second;
    }

    return names;
  }
};
```
