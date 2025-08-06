#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool is_valid_k(int k, int n, const vector<int> &arr) {
  int gcd = 0;

  for (int i = 0; i + k < n; ++i) {
    int diff = abs(arr[i] - arr[i + k]);
    if (gcd == 0) {
      gcd = diff;
    } else {
      gcd = __gcd(gcd, diff);
    }

    if (gcd == 1) {

      return false;
    }
  }

  return true;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }

    int points = 0;

    for (int k = 1; k * k <= n; ++k) {
      if (n % k == 0) {

        if (is_valid_k(k, n, arr)) {
          points++;
        }

        if (k != n / k && is_valid_k(n / k, n, arr)) {
          points++;
        }
      }
    }

    cout << points << endl;
  }

  return 0;
}
