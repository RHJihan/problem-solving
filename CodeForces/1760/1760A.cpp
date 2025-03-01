// https://codeforces.com/contest/1760/problem/A
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
    int mid;

    if ((a > b && a < c) || (a > c && a < b)) {
      cout << a << endl;
    } else if ((b > a && b < c) || (b > c && b < a)) {
      cout << b << endl;
    } else {
      cout << c << endl;
    }
  }

  return 0;
}