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
    int n;
    cin >> n;

    if (n % 2 == 0) {
      cout << "No" << endl;
      continue;
    }

    cout << "Yes" << endl;

    int x = (3 * n + 1) / 2 + 1;

    cout << (n / 2 + 1) << ' ' << (x - n / 2 - 1) << endl;

    x++;

    for (int i = 0; i < n - 1; i++) {
      if (i % 2 == 1) {
        cout << (n / 2 + 2 + i / 2) << ' ' << (x - n / 2 - 2 - i / 2) << endl;
      } else {
        cout << (1 + i / 2) << ' ' << (x - 1 - i / 2) << endl;
      }
      x++;
    }
  }

  return 0;
}
