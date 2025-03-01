// https://codeforces.com/contest/1829/problem/A
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
#endif
  int t; 
  cin >> t;

  string target = "codeforces"; 

  while (t--) {
    string s;
    cin >> s;

    int diff = 0;
    for (int i = 0; i < 10; ++i) {
      if (s[i] != target[i]) {
        diff++;
      }
    }

    cout << diff << '\n';
  }

  return 0;
}