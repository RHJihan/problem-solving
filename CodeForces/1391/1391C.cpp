#include <iostream>
using namespace std;

const int mod = 1e9 + 7;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  long long ans = 1, sum = 1;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    ans = ans * i % mod;
  }
  for (int i = 1; i < n; i++) {
    sum = sum * 2 % mod;
  }

  cout << (ans + mod - sum) % mod << endl;

  return 0;
}
