Problem Name: [Maximum Number of Groups Entering a Competition](https://leetcode.com/problems/maximum-number-of-groups-entering-a-competition/description/)

Problem #2358

Tag: `Binary Search` `Array` `Math` `Greedy`

Difficulty: `Medium`

## Cpp

```cpp
class Solution {
public:
  int maximumGroups(vector<int>& grades) {
    sort(grades.begin(), grades.end());

    int group = 1, groupPointer = 0, sumOfGrades = grades[0], sumOfGradesPointer = 0;
    for ( int i = 1; i < grades.size(); i++ ) {
      groupPointer++;
      sumOfGradesPointer += grades[i];

      if ( groupPointer == group + 1 && sumOfGrades < sumOfGradesPointer ) {
        group++;
        groupPointer = 0;
        sumOfGrades = sumOfGradesPointer;
        sumOfGradesPointer = 0;
      }
    }

    if ( groupPointer == group + 1 && sumOfGrades < sumOfGradesPointer ) {
      group++;
      groupPointer = 0;
      sumOfGrades = sumOfGradesPointer;
      sumOfGradesPointer = 0;
    }

    return group;
  }
};
```

## Cpp (More Efficient)

```cpp
class Solution {
public:
  int maximumGroups(vector<int>& grades) {
    return (sqrt(1 + (8*grades.size())) - 1) / 2;
  }
};
```

> [!NOTE]
>
> <details>
>   <li></li>
>   <li></li>
> </details>
