Problem Name: [Watering Plants](https://leetcode.com/problems/watering-plants/)

Problem #2079

Tag: `Array`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  int wateringPlants(vector<int>& plants, int capacity) {
    int result = 0, remCap = capacity;
    for ( int i = 0; i < plants.size(); i++ ) {
      if ( plants[i] <= remCap ) {
        remCap -= plants[i];
        result++;
      } else {
        remCap = capacity - plants[i];
        result += 2 * i + 1;
      }
    }

    return result;
  }
};
```

<details>
  <summary>Note</summary>
  <li>If below <code>capacity</code> increase by one</li>
  <li>Else increase by <code>2*i+1</code></li>
</details>
