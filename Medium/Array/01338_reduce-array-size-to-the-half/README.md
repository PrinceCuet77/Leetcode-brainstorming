Problem Name: [Reduce Array Size to The Half](https://leetcode.com/problems/reduce-array-size-to-the-half/)

Problem #1338

Tag: `Array` `Hash Table` `Greedy` `Sorting` `Heep (Priority Queue)`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  int minSetSize(vector<int>& arr) {
    unordered_map < int, int > mp;
    for ( int ar : arr ) mp[ar]++;

    vector < int > store;
    for ( auto [u, v] : mp ) store.push_back(v);

    sort(store.begin(), store.end());
    int cnt = 0, result = store.size();
    for ( int i = store.size() - 1; i >= 0; i-- ) {
      cnt += store[i];
      if ( cnt >= arr.size()/2 ) {
        result = store.size() - i;
        break;
      }
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Use <code>unordered_map</code> for storing frequency of any element</li>
  <li>Store frequency in <code>vector</code></li>
  <li>Sort the <code>vector</code></li>
  <li>Count frequency by traversing backward til find out half of the integers</li>
</details>
