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
    int l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

    if (l1 == l2 && l2 == l3 && b1 + b2 + b3 == l1) {
      cout << "YES" << endl;
      continue;
    }
    if (b1 == b2 && b2 == b3 && l1 + l2 + l3 == b1) {
      cout << "YES" << endl;
      continue;
    }

    int side = max(l1, b1);
    if (b1 + max(b2, b3) == side && l1 == side && l2 + l3 == side && b2 == b3) {
      cout << "YES" << endl;
      continue;
    }
    if (l1 + max(l2, l3) == side && b1 == side && b2 + b3 == side && l2 == l3) {
      cout << "YES" << endl;
      continue;
    }
    cout << "NO" << endl;
  }
  return 0;
}
