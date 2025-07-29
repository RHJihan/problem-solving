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
    int x, y, n;
    cin >> x >> y >> n;

    cout << n - (n - y) % x << endl;
  }

  return 0;
}