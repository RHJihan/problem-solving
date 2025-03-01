// https://codeforces.com/contest/1807/problem/C
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int t, n;
    string s;
    cin >> n >> s;
    vector<int> pos(26, -1);
    bool possible = true;

    for (int i = 0; i < s.size(); i++) {
      int c = s[i] - 'a';
      if (pos[c] != -1 && pos[c] % 2 != i % 2) {
        possible = false;
        break;
      }
      pos[c] = i;
    }
    cout << (possible ? "YES" : "NO") << endl;
  }
  return 0;
}