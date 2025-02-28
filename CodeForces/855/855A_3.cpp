// https://codeforces.com/contest/855/problem/A
#include <iostream>
#include <set>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
// (void)!freopen("output.txt","w",stdout);
#endif
  int n;
  cin >> n;
  set<string> st;
  string s;
  for (int i = 0; i < n; i++) {

    cin >> s;
    if (st.find(s) != st.end()) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
      st.insert(s);
    }
  }

  return 0;
}