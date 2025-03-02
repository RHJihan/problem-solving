// https://codeforces.com/contest/1676/problem/D
#include <iostream>
#include <map>
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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> board(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> board[i][j];
      }
    }

    map<int, int> diagonal1, diagonal2;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        diagonal1[i - j] += board[i][j];
        diagonal2[i + j] += board[i][j];
      }
    }

    int max_sum = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int current_sum = diagonal1[i - j] + diagonal2[i + j] - board[i][j];
        if (current_sum > max_sum) {
          max_sum = current_sum;
        }
      }
    }
    cout << max_sum << endl;
  }
  return 0;
}
