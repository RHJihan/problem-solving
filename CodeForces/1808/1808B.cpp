#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    long long n, m;
    cin >> n >> m;

    vector<vector<long long>> columns(m, vector<long long>(n));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> columns[j][i];
      }
    }

    long long total_win = 0;

    for (int j = 0; j < m; j++) {
      sort(columns[j].begin(), columns[j].end());
      long long pre_sum = 0;

      for (int i = 0; i < n; i++) {
        total_win += (long long)i * columns[j][i] - pre_sum;
        pre_sum += columns[j][i];
      }
    }

    cout << total_win << endl;
  }

  return 0;
}
