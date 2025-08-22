#include <algorithm>
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
    long long n;
    cin >> n;

    vector<long long> x;
    long long pos_zero = 10;

    while (pos_zero + 1 <= n) {
      long long d = pos_zero + 1;
      if (n % d == 0) {
        x.push_back(n / d);
      }
      if (pos_zero > n / 10) {
        break;
      }
      pos_zero *= 10;
    }

    if (x.empty()) {
      cout << 0 << endl;
    } else {
      sort(x.begin(), x.end());
      x.erase(unique(x.begin(), x.end()), x.end());

      cout << x.size() << endl;
      for (int i = 0; i < (int) x.size(); i++) {
        if (i) {
          cout << " ";
        }
        cout << x[i];
      }
      cout << endl;
    }
  }
  return 0;
}
