#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<vector<long long>> customers(n, vector<long long>(n));
    vector<bool> served(n, false);

    for (long long i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> customers[i][j];
      }
    }

    for (long long i = 0; i < n; i++) {
      for (long long j = n - 2; j >= 0; j--) {
        customers[i][j] += customers[i][j + 1];
      }
    }

    long long mex = n;

    for (int time = 1; time < n; time++) {
      bool found = false;
      for (int i = 0; i < n; i++) {
        if (customers[i][time] == (n - time) && !served[i]) {
          served[i] = true;
          found = true;
          break;
        }
      }

      if (!found) {
        mex--;
      }
    }

    cout << mex << endl;
  }

  return 0;
}
