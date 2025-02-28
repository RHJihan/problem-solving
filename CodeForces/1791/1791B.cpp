#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, y = 0;
    bool pass = false;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'U') {
        y++;
      } else if (s[i] == 'D') {
        y--;
      } else if (s[i] == 'L') {
        x--;
      } else if (s[i] == 'R') {
        x++;
      }
      if (x == 1 && y == 1) {
        pass = true;
        break;
      }
    }
    cout << (pass ? "YES" : "NO") << endl;
  }

  return 0;
}