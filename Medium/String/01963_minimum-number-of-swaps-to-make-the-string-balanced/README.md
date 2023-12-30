Problem Name: [Minimum Number of Swaps to Make the String Balanced](https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/)

Problem #1963

Tag: `String` `Two Pointers` `Stack` `Greedy`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  int minSwaps(string s) {
    stack < char > st;
    for ( int i = 0; i < s.size(); i++ ) {
      if ( s[i] == '[' ) st.push(s[i]);
      else if ( s[i] == ']' && st.size() != 0 && st.top() == '[' ) st.pop();
    }

    if ( st.size() % 2 == 0 ) return st.size() / 2;

    return st.size() / 2 + 1;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Store <code>[</code> in <code>stack</code></li>
  <li>Remove <code>[</code> if <code>stack</code> is not empty & top element is <code>[</code></li>
  <li>If <code>stack</code> size is odd then return size divided by <code>2</code></li>
  <li>Else return size divided by <code>2</code> plus <code>1</code></li>
</details>
