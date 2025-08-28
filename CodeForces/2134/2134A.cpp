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
    long long n, a, b;
    cin >> n >> a >> b;

    if ((n - b) % 2 == 1) {
      cout << "NO" << endl;
    }

    else if (b >= a) {
      cout << "YES" << endl;
    }

    else if ((a - b) % 2 == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
