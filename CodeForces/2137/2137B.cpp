#include <iostream>
#include <vector>
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
    vector<int> p(n), q(n);

    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }

    for (int i = 0; i < n; i++) {
      q[i] = (n + 1) - p[i];
    }

    for (int i = 0; i < n; i++) {
      cout << q[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
