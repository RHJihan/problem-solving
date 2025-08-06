#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int k;
  cin >> k;

  map<long long, pair<int, int>> seen;

  vector<vector<int>> sequences(k);

  for (int i = 0; i < k; i++) {
    int n;
    cin >> n;
    sequences[i].resize(n);

    long long total_sum = 0;

    for (int j = 0; j < n; ++j) {
      cin >> sequences[i][j];
      total_sum += sequences[i][j];
    }

    for (int j = 0; j < n; ++j) {
      long long sum_without_current = total_sum - sequences[i][j];

      if (seen.count(sum_without_current)) {
        auto [prev_seq_index, prev_elem_index] = seen[sum_without_current];

        if (prev_seq_index != i) {
          cout << "YES" << endl;
          cout << prev_seq_index + 1 << " " << prev_elem_index + 1 << endl;
          cout << i + 1 << " " << j + 1 << endl;
          return 0;
        }
      } else {
        seen[sum_without_current] = {i, j};
      }
    }
  }

  cout << "NO" << endl;
  return 0;
}
