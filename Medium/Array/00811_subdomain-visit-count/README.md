Problem Name: [Subdomain Visit Count](https://leetcode.com/problems/subdomain-visit-count/description/)

Problem #811

Tag: `Array` `Hash Table` `String` `Counting`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  vector<string> subdomainVisits(vector<string>& cpdomains) {
    unordered_map < string, int > mp;
    int num = 0;
    for ( int i = 0; i < cpdomains.size(); i++ ){
      for ( int j = 0; j < cpdomains[i].size(); j++ ){
        if ( cpdomains[i][j] == ' ' ) {
          num = stoi(cpdomains[i].substr(0, j));
          mp[cpdomains[i].substr(j+1, cpdomains[i].size())] += num;
        }
        if ( cpdomains[i][j]== '.' ) {
          mp[cpdomains[i].substr(j+1, cpdomains[i].size())] += num;
        }
      }
    }

    vector < string > ans;
    for ( auto& i : mp ) {
      ans.push_back(to_string(i.second) + " " + i.first);
    }

    return ans;
  }
};
```

> [!NOTE]
>
> <details>
>   <li></li>
>   <li></li>
> </details>
