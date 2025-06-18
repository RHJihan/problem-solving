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
    int x, n;
    cin >> x >> n;

    int max_balance = 1;

    for (int i = 1; i * i <= x; i++) {
      if (x % i == 0) {
        int d1 = i;
        int d2 = x / i;

        if (x / d1 >= n) {
          max_balance = max(max_balance, d1);
        }

        if (x / d2 >= n) {
          max_balance = max(max_balance, d2);
        }
      }
    }

    cout << max_balance << endl;
  }

  return 0;
}
