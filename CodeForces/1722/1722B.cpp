// https://codeforces.com/contest/1722/problem/B
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string one, two;
    cin >> one >> two;
    bool same = true;

    for (int i = 0; i < n; i++) {
      if ((one[i] == 'G' || one[i] == 'B') &&
          (two[i] == 'G' || two[i] == 'B')) {
        continue;
      } else if (one[i] != two[i]) {
        same = false;
        break;
      }
    }

    cout << (same ? "YES" : "NO") << endl;
  }

  return 0;
}