// https://codeforces.com/contest/1850/problem/A
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
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b >= 10) {
      cout << "YES" << endl;
    } else if (a + c >= 10) {
      cout << "YES" << endl;
    } else if (b + c >= 10) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}