#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

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

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    
    vector<vector<long long>> dp(n, vector<long long>(2, 0));

    dp[0][0] = 1;
    dp[0][1] = 1;

    for (int i = 1; i < n; i++) {
      if (a[i] >= b[i - 1] && b[i] >= a[i - 1]) {
        dp[i][0] = (dp[i][0] + dp[i - 1][1]) % MOD;
      }

      if (a[i] >= a[i - 1] && b[i] >= b[i - 1]) {
        dp[i][0] = (dp[i][0] + dp[i - 1][0]) % MOD;
      }

      if (b[i] >= b[i - 1] && a[i] >= a[i - 1]) {
        dp[i][1] = (dp[i][1] + dp[i - 1][1]) % MOD;
      }

      if (b[i] >= a[i - 1] && a[i] >= b[i - 1]) {
        dp[i][1] = (dp[i][1] + dp[i - 1][0]) % MOD;
      }
    }

    cout << (dp[n - 1][0] + dp[n - 1][1]) % MOD << endl;
  }

  return 0;
}
