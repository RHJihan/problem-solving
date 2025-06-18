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
    if (n == 1) {
      cout << 1 << endl;
      continue;
    }

    int result = 1;
    for (int i = 0; i * i <= n; i++) {
      if (i * i <= n) {
        result = i * i;
      }
      if (i * i > n) {
        break;
      }
    }
    cout << result << endl;
  }

  return 0;
}