// https://codeforces.com/contest/1985/problem/A
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
    string a, b;
    cin >> a >> b;

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout << a << " " << b << '\n';
  }

  return 0;
}