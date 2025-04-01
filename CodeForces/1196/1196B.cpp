#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int q;
  cin >> q;

  while (q--) {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> odd_index;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] % 2 == 1) {
        odd_index.push_back(i + 1);
      }
    }

    int odd_count = (int)odd_index.size();

    if (odd_count < k || (odd_count % 2) != (k % 2)) {
      cout << "NO" << endl;
      continue;
    }

    cout << "YES" << endl;

    for (int i = 0; i < k - 1; i++) {
      cout << odd_index[i] << " ";
    }
    cout << n << endl;
  }

  return 0;
}
