// https://codeforces.com/contest/1692/problem/C
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    vector<string> pos(8);

    for (int i = 0; i < 8; i++) {
      cin >> pos[i];
    }

    int x = -1, y = -1;

    for (int i = 1; i < 7; i++) {
      for (int j = 1; j < 7; j++) {
        if (pos[i][j] == '#' &&
            pos[i - 1][j - 1] == '#' && pos[i - 1][j + 1] == '#' &&
            pos[i + 1][j - 1] == '#' && pos[i + 1][j + 1] == '#') {
          x = i + 1;
          y = j + 1;
          break;
        }
      }
    }

    cout << x << " " << y << endl;
  }

  return 0;
}
