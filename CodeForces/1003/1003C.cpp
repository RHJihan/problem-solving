#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, k;
  cin >> n >> k;

  vector<int> a(n + 1);
  vector<int> pre_sum(n + 1, 0);

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    pre_sum[i] = pre_sum[i - 1] + a[i];
  }

  double max_avg = 0.0;

  for (int i = 1; i <= n; i++) {
    for (int j = i + k - 1; j <= n; j++) {
      int sum = pre_sum[j] - pre_sum[i - 1];
      int length = j - i + 1;
      double avg = (double)sum / length;

      if (avg > max_avg) {
        max_avg = avg;
      }
    }
  }
  cout << fixed << setprecision(15) << max_avg << endl;

  return 0;
}
