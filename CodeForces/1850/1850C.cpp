// https://codeforces.com/contest/1850/problem/C
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
    for (int i = 0; i < 8; i++) {
      string s;
      cin >> s;
      for (int i = 0; i < 8; i++) {
        if (isalpha(s[i])) {
          cout << s[i];
        }
      }
    }
    cout << endl;
  }

  return 0;
}