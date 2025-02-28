// https://codeforces.com/contest/44/problem/A
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

  for (int i = 0; i < n; i++) {
    string a, b;
    cin >> a >> b;
    st.insert(a + '#' + b);
  }

  cout << st.size() << '\n';

  return 0;
}