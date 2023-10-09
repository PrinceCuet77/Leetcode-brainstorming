Problem Name: [Removing Stars From a String](https://leetcode.com/problems/removing-stars-from-a-string/)

Problem #2390

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
 string removeStars(string s) {
   vector < char > ss;
   for ( char ch : s ) {
     if ( ch == '*' ) {
       if ( ss.size() >= 1 ) ss.pop_back();
     } else ss.push_back(ch);
   }

   string result = "";
   for ( char ch : ss ) result += ch;

   return result;
 }
};


```