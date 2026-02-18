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
    int n, k;
    cin >> n >> k;

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
      cin >> grid[i];
    }

    for (int i = 0; i < n; i += k) {
      for (int j = 0; j < n; j += k) {
        cout << grid[i][j];
      }
      cout << endl;
    }
  }

  return 0;
}
