// https://atcoder.jp/contests/abc084/tasks/abc084_d
#include <iostream>
#include <vector>
using namespace std;

int MAX_N = 100005;
vector<bool> isPrime(MAX_N, true);
vector<int> count_sum(MAX_N, 0);

void sieve() {
  for (int i = 2; i * i <= MAX_N; i++) {
    if (isPrime[i] == true) {
      for (int j = i * i; j <= MAX_N; j += i)
        isPrime[j] = false;
    }
  }
}

void count() {
  for (int i = 1; i < MAX_N; i += 2) {
    if (isPrime[i] && isPrime[(i + 1) / 2]) {
      count_sum[i] = 1;
    }
  }

  for (int i = 1; i < MAX_N; i++) {
    count_sum[i] += count_sum[i - 1];
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif
  sieve();
  count();
  int t;
  cin >> t;
  while (t--) {
    int l, r;
    cin >> l >> r;

    if (l == 1) {
      cout << (count_sum[r] - count_sum[l - 1]) - 1 << endl;
    } else
      cout << count_sum[r] - count_sum[l - 1] << endl;
  }

  return 0;
}
