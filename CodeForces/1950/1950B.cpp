// https://codeforces.com/contest/1950/problem/B
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n; ++i) {
      for (int j = 0; j < 2 * n; ++j) {
        if (((i / 2) + (j / 2)) % 2 == 0) {
          cout << '#';
        } else {
          cout << '.';
        }
      }
      cout << '\n';
    }
  }

  return 0;
}
