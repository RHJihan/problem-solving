// https://codeforces.com/contest/1742/problem/A
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

    if (a + b == c) {
      cout << "YES" << endl;
      continue;
    } else if (a + c == b) {
      cout << "YES" << endl;
      continue;
    } else if (b + c == a) {
      cout << "YES" << endl;
      continue;
    } else
      cout << "NO" << endl;
  }

  return 0;
}