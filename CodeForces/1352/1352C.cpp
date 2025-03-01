// https://codeforces.com/contest/1352/problem/C
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    long long n, k;
    cin >> n >> k;
    long long low = 1, high = 2 * k, mid, ans;

    while (low <= high) {
      mid = (low + high) / 2;
      long long count = mid - (mid / n);

      if (count >= k) {
        ans = mid;
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    cout << ans << endl;
  }

  return 0;
}
