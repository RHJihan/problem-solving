// https://codeforces.com/contest/1999/problem/D
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
// (void)!freopen("output.txt","w",stdout);
#endif
  int t;
  cin >> t;

  while (t--) {
    string s, test;
    cin >> s >> test;

    int i = 0, j = 0;
    int n = s.length();
    int m = test.length();

    while (i < n && j < m) {
      if (s[i] == test[j] || s[i] == '?') {
        if (s[i] == '?') {
          s[i] = test[j];
        }
        j++;
      }
      i++;
    }

    if (j == m) {
      for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
          s[i] = 'a';
        }
      }
      cout << "YES" << '\n' << s << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}
