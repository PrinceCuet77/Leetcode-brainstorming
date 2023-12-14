Problem Name: [Rearrange Array Elements by Sign](https://leetcode.com/problems/rearrange-array-elements-by-sign/description/)

Problem #2149

Tag: `Array` `Two Pointers` `Simulation`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  vector<int> rearrangeArray(vector<int>& nums) {
    vector < int > result, p, n;
    for ( auto num : nums ) {
      if ( num > 0 ) p.push_back(num);
      else n.push_back(num);
    }

    for ( int i = 0; i < p.size(); i++ ) {
      result.push_back(p[i]);
      result.push_back(n[i]);
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Traverse & store <code>+ve</code> and <code>-ve</code> number in separate <code>vector</code></li>
  <li>Merge it together</li>
</details>

## Cpp (Memory Optimization)

```cpp
class Solution {
public:
  vector<int> rearrangeArray(vector<int>& nums) {
    vector < int > result(nums.size(), 0);
    int p = 0, n = 1;
    for ( auto num : nums ) {
      if ( num > 0 ) {
        result[p] = num;
        p += 2;
      }
      else {
        result[n] = num;
        n += 2;
      }
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Store <code>+ve</code> numbers in odd positions</li>
  <li>Store <code>-ve</code> numbers in even positions</li>
</details>
