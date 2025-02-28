// https://codeforces.com/contest/44/problem/A
#include <iostream>
#include <set>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
// freopen("output.txt","w",stdout);
#endif

  int n;
  cin >> n;
  cin.ignore();

  set<string> st;

  for (int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    st.insert(s);
  }

  cout << st.size() << '\n';

  return 0;
}