#include <iostream>
using namespace std;

int climbStairs(int n) {
  if (n == 1) {
    return 1;
  }
  if (n == 2) {
    return 2;
  }

  int first = 1;
  int second = 2;
  int current;

  for (int i = 3; i <= n; i++) {
    current = first + second;
    first = second;
    second = current;
  }

  return second;
}

int main() {
  int n = 5;
  cout << climbStairs(n) << endl;
  return 0;
}
