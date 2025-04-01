// https://codeforces.com/contest/1676/problem/A
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int a = (int)s[0] + (int)s[1] + (int)s[2];
    int b = (int)s[3] + (int)s[4] + (int)s[5];
    if (a == b) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}