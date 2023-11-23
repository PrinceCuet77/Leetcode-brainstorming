Problem Name: [Display Table of Food Orders in a Restaurant](https://leetcode.com/problems/display-table-of-food-orders-in-a-restaurant/)

Problem #1418

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  vector<vector<string>> displayTable(vector<vector<string>>& orders) {
    set < string > menus;
    map < int, unordered_map < string, int > > mp;
    for ( auto order : orders ) {
      menus.insert(order[2]);
      mp[stoi(order[1])][order[2]]++;
    }

    vector < string > temp(menus.begin(), menus.end());
    temp.insert(temp.begin(), "Table");
    vector < vector < string > > result;
    result.push_back(temp);
    for ( auto m : mp ) {
      vector < string > vec;
      vec.push_back(to_string(m.first));
      for ( auto menu : menus ) {
        vec.push_back(to_string(m.second[menu]));
      }
      result.push_back(vec);
    }

    return result;
  }
};
```
