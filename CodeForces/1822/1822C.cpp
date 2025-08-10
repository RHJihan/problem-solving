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
    long long n;
    cin >> n;

    cout << (n - 1) * (n - 2) + 5 * n << endl;
  }

  return 0;
}
