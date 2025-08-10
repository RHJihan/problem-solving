#include <iostream>
#include <map>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n, q;
    cin >> n >> q;

    map<int, int> first, second;

    for (int i = 1; i <= n; i++) {
      int station;
      cin >> station;

      second[station] = i;

      if (first.count(station) == 0) {
        first[station] = i;
      }
    }

    while (q--) {
      int a, b;
      cin >> a >> b;

      if (first.count(a) > 0 && second.count(b) > 0) {
        if (first[a] <= second[b]) {
          cout << "YES" << endl;
        } else {
          cout << "NO" << endl;
        }
      } else {

        cout << "NO" << endl;
      }
    }
  }
  return 0;
}
