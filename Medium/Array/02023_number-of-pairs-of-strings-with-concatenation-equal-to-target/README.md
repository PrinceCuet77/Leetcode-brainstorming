Problem Name: [Number of Pairs of Strings With Concatenation Equal to Target](https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/)

Problem #2023

Tag: `Array` `Hash Table`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  int numOfPairs(vector<string>& nums, string target) {
    int result = 0;
    unordered_map < string, int > mp;
    for ( string num : nums ) mp[num]++;

    for ( string num : nums ) {
      string prefix = target.substr(0, num.size());
      if ( prefix == num ) {
        string suffix = target.substr(num.size(), target.size());
        cout << suffix << endl;
        if ( mp.find(suffix) != mp.end() ) {
          result += (num == suffix) ? (mp[suffix] - 1) : (mp[suffix]);
        }
      }
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Store frequency for every <code>string</code> in <code>nums</code></li>
  <li>Match every <code>string</code> & rest <code>string</code> according to ta<code>target</code>rget string & count accordingly</li>
</details>
