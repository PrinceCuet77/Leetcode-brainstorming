Problem Name: [Check if Word Equals Summation of Two Words](https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/)

Problem #1880

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
  bool isSumEqual(string firstWord, string secondWord, string targetWord) {
    int first = valueOfString2(firstWord);
    int second = valueOfString2(secondWord);
    int target = valueOfString2(targetWord);

    if ( first + second == target ) return true;
    return false;
  }

  int valueOfString(string str) {
    int total = 0, val = 1;
    for ( int i = str.size() - 1; i >= 0; i-- ) {
      total = total * 10 + (str[i] - 'a');
      val *= 10;
    }

    return total;
  }
```

- Evaluate the total from end to start way:

```cpp
int valueOfString(string str) {
  int total = 0, val = 1;
  for ( int i = str.size() - 1; i >= 0; i-- ) {
    total = total * 10 + (str[i] - 'a');
    val *= 10;
  }

  return total;
}
```

- Evaluate the total from start to end way:

```cpp
int valueOfString(string str) {
  int total = 0;
  for ( int i = 0; i < str.size(); i++ ) {
    total = total * 10 + str[i] - 'a';
  }

  return total;
}
```
