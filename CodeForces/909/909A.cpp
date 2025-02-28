// https://codeforces.com/contest/909/problem/A
#include <iostream>
#include <string>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
// (void)!freopen("output.txt","w",stdout);
#endif

  string first, last;
  cin >> first >> last;

  string login = string(1, first[0]) + last[0];

  for (int i = 1; i <= first.size(); i++) {
    string current = first.substr(0, i) + last[0];
    if (current < login) {
      login = current;
    }
  }

  cout << login << '\n';

  return 0;
}
