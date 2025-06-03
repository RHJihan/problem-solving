#include <iostream>
using namespace std;

int main() {
  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;

    int a = -1, b = -1, c = -1;
    bool found = false;

    for (int i = 2; i * i <= n; ++i) {
      if (n % i == 0) {
        a = i;
        break;
      }
    }

    if (a == -1) {
      cout << "NO" << endl;
      continue;
    }

    n /= a;
    for (int i = a + 1; i * i <= n; ++i) {
      if (n % i == 0) {
        b = i;
        c = n / i;
        if (c != a && c != b && c >= 2) {
          cout << "YES" << endl;
          cout << a << " " << b << " " << c << endl;
          found = true;
          break;
        }
      }
    }

    if (!found) {
      cout << "NO" << endl;
    }
  }

  return 0;
}
