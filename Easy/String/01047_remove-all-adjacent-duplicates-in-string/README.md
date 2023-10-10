Problem Name: [Remove All Adjacent Duplicates In String](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/)

Problem #1047

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  string removeDuplicates(string s) {
    vector < char > v;
    for ( char ch : s ) {
      if ( v.size() == 0 || v[v.size()-1] != ch ) v.push_back(ch);
      else v.pop_back();
    }

    string result = "";
    for ( char ch : v ) result += ch;
      return result;
  }
};
```

But I can solve it using `string` which provides almost similar features like `vector`. It's more efficient than previous method.

```cpp
class Solution {
public:
  string removeDuplicates(string s) {
    string result = "";
    for ( char ch : s ) {
      if ( result.empty() || result.back() != ch ) result.push_back(ch);
      else result.pop_back();
    }

    return result;
  }
};
```
