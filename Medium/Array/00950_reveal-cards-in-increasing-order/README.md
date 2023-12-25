Problem Name: [Reveal Cards In Increasing Order](https://leetcode.com/problems/reveal-cards-in-increasing-order/description/)

Problem #950

Tag: `Array`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  vector<int> deckRevealedIncreasing(vector<int>& deck) {
    int n = deck.size();
    sort(deck.begin(), deck.end());

    queue < int > q;
    for ( int i = 0; i < n; i++ ) q.push(i);

    vector < int > result(n, 0);
    for ( int i = 0; i < n; i++ ) {
      result[q.front()] = deck[i];
      q.pop();
      q.push(q.front());
      q.pop();
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>Sort <code>deck</code></li>
  <li>Take a <code>queue</code> & store <code>0</code> to <code>n-1</code></li>
  <li>Take a <code>deck.size()</code> sized <code>vector</code> assigned <code>0</code> to all the elements</li>
  <li>Store <code>deck[i]</code> to <code>q.front()</code> index in <code>vector</code></li>
  <li>Pop element from the <code>queue</code></li>
  <li>Push <code>q.front()</code> to the <code>queue</code></li>
  <li>Pop element from the <code>queue</code></li>
  <li>Repeat last 4 steps from <code>0</code> to <code>n-1</code></li>
</details>
