// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3890
#include <iostream>
using namespace std;

const int MAX_N = 80;
long long fib[MAX_N + 1];

void fibonacci() {
  fib[1] = 1;
  fib[2] = 2;
  for (int i = 3; i <= MAX_N; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  fibonacci();

  int n;
  while (cin >> n && n != 0) {
    cout << fib[n] << endl;
  }

  return 0;
}
