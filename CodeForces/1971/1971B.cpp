// https://codeforces.com/contest/1971/problem/B
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
    cin >> s;
    char c = s[0];
    int count = 1;

    for (int i = 1; i < s.size(); i++) {
      if (s[i] != c) {
        count++;
      }
    }

    if (count == 1) {
      cout << "NO" << '\n';
    } else {
      string r = s;
      cout << "YES" << '\n';
      for (int i = 0; i < s.size() - 1; i++) {
        r[i] = s[i + 1];
        r[i + 1] = s[i];
        if (r != s) {
          break;
        }
      }

      cout << r << '\n';
    }
  }

  return 0;
}