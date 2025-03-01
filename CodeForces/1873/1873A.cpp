// https://codeforces.com/contest/1873/problem/A
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
    if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c') {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}