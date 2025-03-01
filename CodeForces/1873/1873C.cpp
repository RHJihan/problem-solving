// https://codeforces.com/contest/1873/problem/C
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif
  int t;
  cin >> t;

  while (t--) {
    string grid[10];
    for (int i = 0; i < 10; i++) {
      cin >> grid[i];
    }

    int result = 0;
    int score[] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};

    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        if (grid[i][j] == 'X') {
          result += min(score[i], score[j]);
        }
      }
    }

    cout << result << endl;
  }

  return 0;
}
