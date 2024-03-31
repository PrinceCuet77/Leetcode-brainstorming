Problem Name: [Design Browser History](https://leetcode.com/problems/design-browser-history/)

Problem #1472

Tag: `Array` `Linked List` `Stack` `Design` `Doubly-Linked List` `Data Stream`

Difficulty: `Medium`

## Cpp

```cpp
class BrowserHistory {
  vector < string > history;
  int currentIdx = -1;

  void push(string url) {
    history.push_back(url);
    currentIdx++;
  }

public:
  BrowserHistory(string homepage) {
    push(homepage);
  }

  void visit(string url) {
    if ( currentIdx != history.size() - 1 ) {
      int sz = history.size();
      for ( int i = currentIdx + 1; i < sz; i++ ) history.pop_back();
    }

    push(url);
  }

  string back(int steps) {
    if ( currentIdx > steps ) currentIdx -= steps;
    else currentIdx = 0;

    return history[currentIdx];
  }

  string forward(int steps) {
    if ( currentIdx + steps < history.size() ) currentIdx += steps;
    else currentIdx = history.size() - 1;

    return history[currentIdx];
  }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
```

> [!NOTE]
>
> <details>
>   <li>Maintain browser history in <code>vector</code></li>
>   <li>Store the <code>url</code>, track back & forward according to description</li>
> </details>
