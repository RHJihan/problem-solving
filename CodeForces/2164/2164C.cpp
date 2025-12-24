#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int T;
  cin >> T;

  while (T--) {
    int n, m;
    cin >> n >> m;

    vector<int> swords(n);
    for (int i = 0; i < n; i++) {
      cin >> swords[i];
    }

    vector<int> cost(m), life(m);
    for (int i = 0; i < m; i++) {
      cin >> cost[i];
    }
    for (int i = 0; i < m; i++) {
      cin >> life[i];
    }

    vector<pair<int, int>> monsters(m);
    for (int i = 0; i < m; i++) {
      monsters[i] = {life[i], cost[i]};
    }
  }

  return 0;
}