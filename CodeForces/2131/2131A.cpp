#include <iostream>
#include <vector>
using namespace std;

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

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }

    long long count = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] > b[i]) {
        count += (a[i] - b[i]);
      }
    }

    if (count == 0) {
      cout << 1 << endl;
    } else {
      cout << count + 1 << endl;
    }
  }

  return 0;
}