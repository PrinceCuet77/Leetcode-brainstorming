Problem Name: [Count Number of Distinct Integers After Reverse Operations](https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/description/)

Problem #2442

Tag: `Array` `Hash Table` `Math`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
  int reverseDigit(int num) {
    int val = 0; 
    while ( num > 0 ) { 
      val = val * 10 + num % 10; 
      num /= 10; 
    }
    return val; 
  }

public:
  int countDistinctIntegers(vector<int>& nums) {
    unordered_set < int > st;
    for ( auto num : nums ) {
      st.insert(num);
      st.insert(reverseDigit(num));
    }

    return st.size();
  }
};
```

<details>
  <summary>Note</summary>
  <li>Store every elements and reverse elements of <code>nums</code> in <code>unordered_set</code></li>
  <li>Return it's size</li>
</details>
