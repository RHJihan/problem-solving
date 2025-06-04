#include <iostream>
#include <vector>
using namespace std;

int main() {
  int q;
  cin >> q;
  while (q--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    int low = a[0] - k;
    int high = a[0] + k;

    for (int i = 1; i < n; ++i) {
      low = max(low, a[i] - k);
      high = min(high, a[i] + k);
    }

    if (low > high) {
      cout << -1 << endl;
    } else {
      cout << high << endl;
    }
  }
  return 0;
}
