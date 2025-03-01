// https://codeforces.com/contest/1999/problem/C

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, s, m;
    cin >> n >> s >> m;

    bool possible = false;
    int prevEnd = 0;

    for (int i = 0; i < n; ++i) {
      int l, r;
      cin >> l >> r;

      if (l - prevEnd >= s) {
        possible = true;
      }
      prevEnd = r;
    }
    

    if (m - prevEnd >= s) {
      possible = true;
    }

    cout << (possible ? "YES" : "NO") << '\n';
  }

  return 0;
}
