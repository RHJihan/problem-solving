// https://codeforces.com/contest/1807/problem/A
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
      cout << "+" << endl;
    } else
      cout << "-" << endl;
  }

  return 0;
}