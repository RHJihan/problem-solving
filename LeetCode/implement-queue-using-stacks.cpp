#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
private:
  stack<int> s1, s2;

public:
  MyQueue() {
  }

  void push(int x) {
    s1.push(x);
  }

  int pop() {
    while (s1.size() > 1) {
      s2.push(s1.top());
      s1.pop();
    }
    int result = s1.top();
    s1.pop();
    while (!s2.empty()) {
      s1.push(s2.top());
      s2.pop();
    }
    return result;
  }

  int peek() {
    while (s1.size() > 1) {
      s2.push(s1.top());
      s1.pop();
    }
    int result = s1.top();
    while (!s2.empty()) {
      s1.push(s2.top());
      s2.pop();
    }
    return result;
  }

  bool empty() {
    return s1.empty();
  }
};

int main() {
  MyQueue myQueue;

  myQueue.push(1); 
  myQueue.push(2); 

  cout << myQueue.peek() << endl;                
  cout << myQueue.pop() << endl;                      
  cout << (myQueue.empty() ? "true" : "false") << endl; 

  return 0;
}