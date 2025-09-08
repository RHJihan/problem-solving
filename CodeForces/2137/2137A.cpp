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
    int k, x;
    cin >> k >> x;

    for (int i = 0; i < k; i++) {
      x = x * 2;
    }

    cout << x << endl;
  }
  return 0;
}
