Problem Name: [Encode and Decode TinyURL](https://leetcode.com/problems/encode-and-decode-tinyurl/)

Problem #535

Difficulty: `Medium`

Cpp:

```cpp
class Solution {
public:
  // Encodes a URL to a shortened URL.
  string encode(string longUrl) {
    return longUrl;
  }

  // Decodes a shortened URL to its original URL.
  string decode(string shortUrl) {
    return shortUrl;
  }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
```

Another Solution, Cpp:

```cpp
class Solution {
  unordered_map < string, string > mp;
  int n = 0;
public:
  // Encodes a URL to a shortened URL.
  string encode(string longUrl) {
    string url = "http://tinyurl.com/" + to_string(n);
    n++;
    mp[url] = longUrl;
    return url;
  }

  // Decodes a shortened URL to its original URL.
  string decode(string shortUrl) {
    return mp[shortUrl];
  }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
```
