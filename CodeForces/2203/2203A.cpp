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
    int n, m, d;
    cin >> n >> m >> d;

    int max_h = d / m + 1;

    cout << (max_h - 1 + n) / max_h << endl;
  }
  return 0;
}