Problem Name: [My Calendar I](https://leetcode.com/problems/my-calendar-i/description/)

Problem #729

Tag: `Binary Search` `Design` `Segment Tree` `Ordered Set`

Difficulty: `Medium`

## Cpp

```cpp
class MyCalendar {
  map < int, int > mp;

public:
  MyCalendar() {

  }

  bool book(int start, int end) {
    auto it = mp.upper_bound(start);
    if( it == mp.end() || end <= it->second ) {
      mp[end] = start;
      return true;
    }

    return false;
  }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
```

<details>
  <summary>Note</summary>
  <li>Will disclose later</li>
</details>
