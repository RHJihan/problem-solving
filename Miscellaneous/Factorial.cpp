#include <iostream>
using namespace std;

int factorial(int n) {
  if (n <= 1) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int n;
  cin >> n;

  cout << factorial(n);

  return 0;
}
