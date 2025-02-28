// https://atcoder.jp/contests/abc144/tasks/abc144_c
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  long long n;
  cin >> n;

  long long moves = n - 1;

  for (long long i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      long long j = n / i;
      moves = min(moves, (i - 1) + (j - 1));
    }
  }

  cout << moves << endl;

  return 0;
}