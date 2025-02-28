// https://codeforces.com/contest/855/problem/A
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
// (void)!freopen("output.txt","w",stdout);
#endif
  int n;
  cin >> n;
  vector<string> v(n);
  string s;
  for (int i = 0; i < n; i++) {

    cin >> s;
    if (find(v.begin(), v.end(), s) != v.end()) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
    v.push_back(s);
  }

  return 0;
}