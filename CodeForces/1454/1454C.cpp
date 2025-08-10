#include <iostream>
#include <vector>
#include <climits>
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

    vector<int> arr(n + 1);
    vector<int> segments(n + 1, 0);

    for (int i = 1; i <= n; i++) {
      cin >> arr[i];
    }

    for (int i = 2; i <= n + 1; i++) {
      if (arr[i] != arr[i - 1]) {
        segments[arr[i - 1]]++;
      }
    }

    int count = INT_MAX;

    for (int i = 1; i <= n; i++) {
      if (segments[i] == 0) {
        continue;
      }

      int extra = 0;
      if (arr[1] == i) {
        extra++;
      }
      if (arr[n] == i) {
        extra++;
      }

      int operations = segments[i] - extra + 1;

      count = min(count, operations);
    }

    cout << count << endl;
  }

  return 0;
}
