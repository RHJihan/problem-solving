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

  vector<int> coins = {1, 3, 6, 10, 15};

  vector<int> dp = {0, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3, 1, 2, 3, 2, 3, 2, 2, 3, 3, 3, 2, 3, 3, 3, 4, 2};

  for (int i = 0; i < t; ++i) {
    int n;
    cin >> n;

    int extra_coin = 0;

    if (n > 30) {
      extra_coin = (n / 15) - 1;
      n -= extra_coin * 15;
    }

    int result = dp[n] + extra_coin;

    cout << result << endl;
  }

  return 0;
}
