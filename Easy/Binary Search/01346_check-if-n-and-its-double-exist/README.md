Problem Name: [Check If N and Its Double Exist](https://leetcode.com/problems/check-if-n-and-its-double-exist/description/)

Problem #1346

Tag: `Binary Search` `Hash Table` `Two Pointers` `Sorting` `Array`

Difficulty: `Easy`

## Cpp

```cpp
class Solution {
public:
  bool checkIfExist(vector<int>& arr) {
    unordered_set < int > st;
    for ( int a : arr ) {
      if ( st.count(2 * a) > 0 || (( a % 2 == 0 ) && st.count(a / 2) > 0 )) return true;
      st.insert(a);
    }

    return false;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Traverse the array & maintain it in <code>unordered_set</code></li>
>   <li>For every steps,if the element <code>2 * arr[i]</code> or <code>arr[i] / 2</code> & <code>arr[i] % 2 == 0</code></li>
> </details>
