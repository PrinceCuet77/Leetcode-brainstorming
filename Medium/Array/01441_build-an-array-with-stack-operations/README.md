Problem Name: [Build an Array With Stack Operations](https://leetcode.com/problems/build-an-array-with-stack-operations/description/)

Problem #1441

Tag: `Array` `Stack` `Simulation`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  vector<string> buildArray(vector<int>& target, int n) {
    vector < string > result;
    for (int i = 1, k = 0; i <= n && k < target.size(); i++ ) {
      if ( i == target[k] ) {
        result.push_back("Push");
        k++;
      } else {
        result.push_back("Push");
        result.push_back("Pop");
      }
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Traverse from <code>1</code> to <code>n</code></li>
  <li>If a number matches with <code>target</code> then insert <code>Push</code> to a <code>vector</code></li>
  <li>else insert both <code>Push</code> & <code>Pop</code></li>
</details>
