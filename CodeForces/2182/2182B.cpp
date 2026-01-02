#include <iostream>
using namespace std;

long long sumPow(int L) {
  return (1LL << L) - 1;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    long long a, b;
    cin >> a >> b;

    int ans = 0;

    for (int L = 1; L <= 60; L++) {
      long long total = sumPow(L);
      if (total > a + b)
        break;

      long long white1 = 0, dark1 = 0;
      long long white2 = 0, dark2 = 0;

      long long cur = 1;

      for (int i = 1; i <= L; i++) {
        if (i % 2 == 1) {
          white1 += cur;
          dark2 += cur;
        } else {
          dark1 += cur;
          white2 += cur;
        }
        cur <<= 1;
      }

      if ((white1 <= a && dark1 <= b) || (white2 <= a && dark2 <= b))
        ans = L;
    }

    cout << ans << endl;
  }

  return 0;
}
