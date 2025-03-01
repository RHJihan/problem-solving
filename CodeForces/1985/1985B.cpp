// https://codeforces.com/contest/1985/problem/B
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
    int n;
    cin >> n;

    int max_sum = 0;
    int max_x = 2;

    for (int x = 2; x <= n; x++) {
      int current_sum = 0;
      for (int k = 1; x * k <= n; k++) {
        current_sum += x * k;
      }

      if (current_sum > max_sum) {
        max_sum = current_sum;
        max_x = x;
      }
    }

    cout << max_x << '\n';
  }

  return 0;
}