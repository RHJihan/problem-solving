#include <iostream>
#include <stack>
using namespace std;

class MinStack {
public:
  stack<int> st, min_st;

  void push(int val) {
    st.push(val);

    if (min_st.empty() || val <= min_st.top()) {
      min_st.push(val);
    }
  }

  void pop() {
    if (st.top() == min_st.top()) {
      min_st.pop();
    }
    st.pop();
  }

  int top() {
    if (st.empty()) {
      return -1;
    }
    return st.top();
  }
  int getMin() {
    if (min_st.empty()) {
      return -1;
    }
    return min_st.top();
  }
};

int main() {
  MinStack minStack;
  minStack.push(-2);
  minStack.push(0);
  minStack.push(-3);

  cout << "getMin() -> " << minStack.getMin() << endl;
  minStack.pop();
  cout << "top() -> " << minStack.top() << endl;
  cout << "getMin() -> " << minStack.getMin() << endl;

  return 0;
}