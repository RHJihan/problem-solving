#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, m;
  char c;

  cin >> n >> m >> c;

  vector<string> office(n);
  for (int i = 0; i < n; i++) {
    cin >> office[i];
  }

  set<char> colors;

  int dx[] = {-1, 1, 0, 0};
  int dy[] = {0, 0, -1, 1};

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (office[i][j] == c) {
        for (int d = 0; d < 4; d++) {
          int ni = i + dx[d];
          int nj = j + dy[d];
          if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
            char neighbor = office[ni][nj];
            if (neighbor != '.' && neighbor != c) {
              colors.insert(neighbor);
            }
          }
        }
      }
    }
  }

  cout << colors.size() << endl;

  return 0;
}
