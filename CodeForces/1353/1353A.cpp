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
    int n, m;
    cin >> n >> m;

    if (n == 1)
      cout << 0 << endl;
    else if (n == 2)
      cout << m << endl;
    else
      cout << m + m << endl;
  }

  return 0;
}
