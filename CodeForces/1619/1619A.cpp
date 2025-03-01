// https://codeforces.com/contest/1619/problem/A
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
    if (s.size() % 2 != 0) {
      cout << "NO" << endl;
      continue;
    }
    string a = "";
    string b = "";

    for (int i = 0; i < s.size() / 2; i++) {
      a += s[i];
    }
    for (int i = s.size() / 2; i < s.size(); i++) {
      b += s[i];
    }

    if (a == b) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}