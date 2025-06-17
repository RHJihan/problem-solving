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
    int n, k;
    cin >> n >> k;

    vector<int> apples(n);
    int total_apple = 0;

    for (int i = 0; i < n; i++) {
      cin >> apples[i];
      total_apple += apples[i];
    }

    sort(apples.begin(), apples.end());

    int min_apples = apples[0];
    int max_apples = apples[n - 1];

    int max_count = 0;
    for (int i = 0; i < n; i++) {
      if (apples[i] == max_apples) {
        max_count++;
      }
    }

    if (max_apples - min_apples > k + 1) {
      cout << "Jerry" << endl;
    } else if (max_apples - min_apples > k && max_count > 1) {
      cout << "Jerry" << endl;
    } else {
      if (total_apple % 2 == 0) {
        cout << "Jerry" << endl;
      } else {
        cout << "Tom" << endl;
      }
    }
  }

  return 0;
}
