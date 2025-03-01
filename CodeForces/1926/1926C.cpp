// https://codeforces.com/contest/1926/problem/C
#include <cstring>
#include <iostream>
using namespace std;

int sumOfDigits(int n) {
  int sum = 0;
  while (n != 0) {
    int last = n % 10;
    sum += last;
    n /= 10;
  }
  return sum;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;

  int dp[200005];
  memset(dp, 0, sizeof(dp));

  for (int i = 1; i < 200002; i++) {
    dp[i] = dp[i - 1] + sumOfDigits(i);
  }

  while (t--) {
    int n;
    cin >> n;
    cout << dp[n] << endl;
  }

  return 0;
}