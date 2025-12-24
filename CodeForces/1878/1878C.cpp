#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    long long n, k, x;
    cin >> n >> k >> x;

    long long minSum = k * (k + 1) / 2;
    long long maxSum = k * (2 * n - k + 1) / 2;

    if (x >= minSum && x <= maxSum)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
