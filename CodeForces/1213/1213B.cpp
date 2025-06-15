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

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
      cin >> prices[i];
    }

    int bad_day = 0;
    int min_price = prices[n - 1];

    for (int i = n - 2; i >= 0; i--) {
      if (prices[i] > min_price) {
        bad_day++;
      } else {
        min_price = prices[i];
      }
    }

    cout << bad_day << endl;
  }

  return 0;
}
