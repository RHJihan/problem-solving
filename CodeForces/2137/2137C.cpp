#include <iostream>
using namespace std;

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

    if (b % 2 == 1) {
      if (a % 2 == 0) {
        cout << -1 << endl;
      } else {
        cout << a * b + 1 << endl;
      }
    } else {
      long long tmp = b;
      int count = 0;
      while (tmp % 2 == 0) {
        tmp /= 2;
        count++;
      }

      if (a % 2 == 1 && count == 1) {
        cout << -1 << endl;
      } else {
        long long k;
        if (a % 2 == 1) {
          k = 2;
        } else {
          k = 1;
        }

        long long sum1 = a * k + b / k;
        long long sum2 = a * (b / 2) + 2;

        cout << max(sum1, sum2) << endl;
      }
    }
  }

  return 0;
}
