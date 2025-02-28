// https://codeforces.com/contest/909/problem/A
#include <iostream>
#include <string>
using namespace std;

string prefix(string first, int l) {
  string prefix = "";
  for (int i = 0; i < l && i < first.size(); i++) {
    prefix += first[i];
  }
  return prefix;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
// (void)!freopen("output.txt","w",stdout);
#endif

  string first, last;
  cin >> first >> last;

  string login = string(1, first[0]) + last[0];

  for (int i = 1; i <= first.size(); i++) {
    string current = prefix(first, i) + last[0];
    if (current < login) {
      login = current;
    }
  }

  cout << login << '\n';

  return 0;
}
