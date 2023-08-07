Problem Name: [Unique Email Addresses](https://leetcode.com/problems/unique-email-addresses/)

Problem #929

Difficulty: `Easy`

Cpp:

```cpp
class Solution {
public:
   int numUniqueEmails(vector<string>& emails) {
    unordered_set < string > st;
    for( auto email : emails ) {
        string cleanEmail;
        for( char c : email ) {
            if ( c == '+' || c == '@' ) break;
            if( c == '.' ) continue;
            cleanEmail += c;
        }

        cleanEmail += email.substr(email.find('@'));
        st.insert(cleanEmail);
    }

    return st.size();
  }
};
```
