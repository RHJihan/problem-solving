// https://codeforces.com/contest/1926/problem/A
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
    int a = 0, b = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'A') {
        a++;
      } else
        b++;
    }

    if (a > b) {
      cout << 'A' << '\n';
    } else
      cout << 'B' << '\n';
  }

  return 0;
}