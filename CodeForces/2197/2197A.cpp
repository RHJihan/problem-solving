#include <iostream>
using namespace std;

long long digit_sum(long long n) {
  long long sum = 0;
  while (n != 0) {
    int last = n % 10;
    sum += last;
    n /= 10;
  }
  return sum;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    long long x;
    cin >> x;

    int ans = 0;

    for (int i = 1; i <= 165; i++) {
      long long y = x + i;
      if (digit_sum(y) == i) {
        ans++;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
