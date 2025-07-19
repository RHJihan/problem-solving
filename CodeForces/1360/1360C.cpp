#include <algorithm>
#include <iostream>
using namespace std;

int a[10005];

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
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a, a + n);

    int odd_count = 0, even_count = 0;
    bool has_pair_diff_one = false;

    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 0)
        even_count++;
      else
        odd_count++;

      if (i > 0 && a[i] - a[i - 1] == 1) {
        has_pair_diff_one = true;
      }
    }

    if ((odd_count % 2 == 0) && (even_count % 2 == 0)) {
      cout << "YES" << endl;
    } else if (has_pair_diff_one) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
