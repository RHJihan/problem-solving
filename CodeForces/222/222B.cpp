#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, m, k;
  int row[1010], col[1020], table[1020][1020];

  cin >> n >> m >> k;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> table[i][j], col[j] = j;
    }
    row[i] = i;
  }

  for (int i = 1; i <= k; i++) {
    char s;
    cin >> s;
    int x, y;
    cin >> x >> y;
    if (s == 'r') {
      int t = row[x];
      row[x] = row[y];
      row[y] = t;
    }
    if (s == 'c') {
      int t = col[x];
      col[x] = col[y];
      col[y] = t;
    }
    if (s == 'g') {
      cout << table[row[x]][col[y]] << endl;
    }
  }

  return 0;
}
