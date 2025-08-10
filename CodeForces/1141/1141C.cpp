#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;

  vector<int> q(n - 1);
  for (int i = 0; i < n - 1; i++) {
    cin >> q[i];
  }

  vector<int> prefix_sum(n);
  prefix_sum[0] = 0;

  for (int i = 1; i < n; i++) {
    prefix_sum[i] = prefix_sum[i - 1] + q[i - 1];
  }

  int min_val = *min_element(prefix_sum.begin(), prefix_sum.end());
  int shift = 1 - min_val;

  vector<int> perm(n);
  vector<bool> used(n + 1, false);

  for (int i = 0; i < n; i++) {
    perm[i] = prefix_sum[i] + shift;
    if (perm[i] < 1 || perm[i] > n || used[perm[i]]) {
      cout << -1 << endl;
      return 0;
    }
    used[perm[i]] = true;
  }

  for (int i = 0; i < n; i++) {
    cout << perm[i] << " ";
  }
  cout << endl;

  return 0;
}
