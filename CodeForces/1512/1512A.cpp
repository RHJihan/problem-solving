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

    int a[105];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int majority;
    if (a[0] == a[1] || a[0] == a[2]) {
      majority = a[0];
    } else {
      majority = a[1];
    }

    for (int i = 0; i < n; i++) {
      if (a[i] != majority) {
        cout << i + 1 << endl;
        break;
      }
    }
  }

  return 0;
}
