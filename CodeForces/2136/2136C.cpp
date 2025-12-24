#include <iostream>
#include <queue>
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
    int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }

    vector<queue<int>> q(n + 1);

    vector<int> dp(n + 1, 0);

    for (int i = 1; i <= n; i++) {
      int x = a[i];
      q[x].push(i);

      if ((int)q[x].size() == x) {
        int firstIndex = q[x].front();
        dp[i] = max(dp[i - 1], dp[firstIndex - 1] + x);
        q[x].pop();
      } else {
        dp[i] = dp[i - 1];
      }
    }

    cout << dp[n] << endl;
  }

  return 0;
}
