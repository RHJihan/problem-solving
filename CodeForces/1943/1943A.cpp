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

    vector<int> freq(n + 1, 0);

    for (int i = 0; i < n; ++i) {
      int value;
      cin >> value;
      freq[value]++;
    }

    bool one_found = false;
    int mex = 0;

    for (int i = 0; i <= n; ++i) {
      if (freq[i] == 0) {
        mex = i;
        break;
      }

      if (freq[i] == 1) {
        if (one_found) {
          mex = i;
          break;
        }
        one_found = true;
      }
    }

    cout << mex << endl;
  }

  return 0;
}
