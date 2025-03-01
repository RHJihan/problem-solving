// https://codeforces.com/contest/1807/problem/B
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

    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
      int c;
      cin >> c;
      if (c % 2 == 0) {
        even += c;
      } else
        odd += c;
    }

    cout << ((even > odd) ? "YES" : "NO") << endl;
  }

  return 0;
}