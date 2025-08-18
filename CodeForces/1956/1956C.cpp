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

    int sum = 0;
    for (int i = 1; i <= n; i++) {
      sum += (2 * i - 1) * i;
    }

    if (n == 1) {
      cout << "1 1" << endl
           << "1 1 1" << endl;
      continue;
      ;
    }

    cout << sum << " " << 2 * n << endl;

    for (int i = n; i >= 1; i--) {
      cout << "1 " << i << " ";
      for (int j = 1; j <= n; j++)
        cout << j << " ";
      cout << endl;

      cout << "2 " << i << " ";
      for (int j = 1; j <= n; j++)
        cout << j << " ";
      cout << endl;
    }
  }

  return 0;
}
