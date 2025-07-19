#include <cstring>
#include <iostream>
using namespace std;

const long long MOD = 100000007;
const long long MAXN = 51;
const long long MAXK = 1001;

long long n, k;
long long A[MAXN], C[MAXN];
long long dp[MAXN][MAXK];

long long call(long long pos, long long amount) {
  if (amount == 0) {
    return 1;
  }
  if (pos == n) {
    return 0;
  }

  long long res = dp[pos][amount];
  if (res != -1)
    return res;

  res = 0;
  for (long long i = 0; i <= C[pos]; i++) {
    long long value = i * A[pos];
    if (value > amount) {
      break;
    }
    res = (res + call(pos + 1, amount - value)) % MOD;
  }

  return res;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  (void)!freopen("output.txt", "w", stdout);
#endif

  long long t;
  cin >> t;

  for (long long cs = 1; cs <= t; cs++) {
    cin >> n >> k;

    for (long long i = 0; i < n; i++) {
      cin >> A[i];
    }
    for (long long i = 0; i < n; i++) {
      cin >> C[i];
    }

    memset(dp, -1, sizeof(dp));
    long long ans = call(0, k);
    cout << "Case " << cs << ": " << ans << endl;
  }

  return 0;
}
