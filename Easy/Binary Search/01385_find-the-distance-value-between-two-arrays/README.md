Problem Name: [Find the Distance Value Between Two Arrays](https://leetcode.com/problems/find-the-distance-value-between-two-arrays/)

Problem #1385

Tag: `Binary Search` `Array` `Two Pointer` `Sorting`

Difficulty: `Easy`

## Cpp

```cpp
class Solution {
  int count = 0;
  void binarySearch(vector < int > v, int low, int high, int x, int y) {
    while ( low <= high ) {
      int mid = low + (high - low) / 2;
      if ( v[mid] < x ) low = mid + 1;
      else if ( v[mid] > y ) high = mid - 1;
      else {
        count++;
        break;
      }
    }
  }

public:
  int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    int m = arr1.size(), n = arr2.size();
    sort(arr2.begin(), arr2.end());

    for ( int a : arr1 ) {
      int x = a - d, y = a + d;
      binarySearch(arr2, 0, n - 1, x, y);
    }

    return m - count;
  }
};
```

> [!NOTE]
>
> <details>
>   <li>Sort <code>arr2</code></li>
>   <li>Traverse <code>arr1</code> & do binary search on sorted <code>arr2</code></li>
>   <li>Modify binary search as find <code>count</code> between <code>arr1[i] - d</code> & <code>arr1[i] + d</code></li>
>   <li>Return <code>arr1.size() - count</code>
> </details>
