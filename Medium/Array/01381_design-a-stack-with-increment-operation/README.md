Problem Name: [Design a Stack With Increment Operation](https://leetcode.com/problems/design-a-stack-with-increment-operation/description/)

Problem #1381

Tag: `Array` `Stack` `Design`

Difficulty: `Medium`

## Cpp

```cpp
class CustomStack {
  vector < int > st;
  int limit = -1;

public:
  CustomStack(int maxSize) {
    limit = maxSize;
  }
  
  void push(int x) {
    if ( limit == st.size() ) return;
    st.push_back(x);
  }
  
  int pop() {
    if ( st.size() == 0 ) return -1;
    
    int value = st[st.size()-1];
    st.pop_back();

    return value; 
  }
  
  void increment(int k, int val) {
    if ( st.size() >= k ) {
      for ( int i = 0; i < k; i++ ) st[i] += val;
      return;
    }

    for ( int i = 0; i < st.size(); i++ ) st[i] += val;
  }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
```

> [!NOTE]
>
> <details>
>   <li>Use <code>vector</code> for storage</li>
>   <li>Track max limit & organize the code according to the description</li>
> </details>
