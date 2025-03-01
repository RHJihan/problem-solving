// https://codeforces.com/contest/1722/problem/A
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
    string s;
    int n;
    cin >> n;
    cin >> s;
    bool T = false, i = false, m = false, u = false, r = false;
    if (n == 5) {
      for (int j = 0; j < n; j++) {
        if (s[j] == 'T') {
          T = true;
        } else if (s[j] == 'i') {
          i = true;
        } else if (s[j] == 'm') {
          m = true;
        } else if (s[j] == 'u') {
          u = true;
        } else if (s[j] == 'r') {
          r = true;
        }
      }
      cout << ((T && i && m && u && r) ? "YES" : "NO") << endl;
    } else
      cout << "NO" << endl;
  }

  return 0;
}