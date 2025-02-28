// https://codeforces.com/contest/855/problem/A
#include <iostream>
#include <vector>
using namespace std;

bool find(vector<string> v, string s) {
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == s) {
      return true;
    }
  }
  return false;
}

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
    if (find(v, s)) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
    v.push_back(s);
  }

  return 0;
}