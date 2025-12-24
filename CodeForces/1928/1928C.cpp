#include <iostream>
#include <set>
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
    int n, x;
    cin >> n >> x;

    set<int> possibleK;

    int limit = max(n - x, n + x - 2);

    for (int d = 1; d * d <= limit; d++) {

      if ((n - x) % d == 0) {

        if (d % 2 == 0) {
          int k= (d + 2) / 2;
          if (k >= x) {
            possibleK.insert(k);
          }
        }

        int other = (n - x) / d;
        if (other % 2 == 0) {
          int k= (other + 2) / 2;
          if (k >= x) {
            possibleK.insert(k);
          }
        }
      }

      if ((n + x - 2) % d == 0) {

        if (d % 2 == 0) {
          int k= (d + 2) / 2;
          if (k >= x) {
            possibleK.insert(k);
          }
        }

        int other = (n + x - 2) / d;
        if (other % 2 == 0) {
          int k= (other + 2) / 2;
          if (k >= x) {
            possibleK.insert(k);
          }
        }
      }
    }

    cout << possibleK.size() << endl;
  }

  return 0;
}
