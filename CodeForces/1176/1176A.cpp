#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  long long n;
  cin >> t;

  while (t--) {
    cin >> n;
    if (n == 1) {
      cout << 0 << endl;
      continue;
    }

    int count = 0;

    while (n > 1) {
      if (n % 2 == 0) {
        n /= 2;
        count++;
      } else if (n % 3 == 0) {
        n = (2 * n) / 3;
        count++;
      } else if (n % 5 == 0) {
        n = (4 * n) / 5;
        count++;
      } else {
        cout << -1 << endl;
        break;
      }
      if (n == 1) {
        cout << count << endl;
        break;
      }
    }
  }

  return 0;
}
