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

    for (int i = 1; i <= n; i++) {
      cout << (2 * i - 1) << " ";
    }
    cout << endl;
  }
  return 0;
}