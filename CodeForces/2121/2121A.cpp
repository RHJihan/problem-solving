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
    int n, s;
    cin >> n >> s;

    vector<int> positions(n);

    for (int i = 0; i < n; i++) {
      cin >> positions[i];
    }
    if (n == 1) {
      cout << abs(s - positions[0]) << endl;
      continue;
    }

    sort(positions.begin(), positions.end());

    if (s < positions[0]) {
      cout << positions[n - 1] - s << endl;
      continue;
    }

    if (s > positions[n - 1]) {
      cout << s - positions[0] << endl;
      continue;
    }

    int begin = s - positions[0];
    int end = positions[n - 1] - s;

    if (begin < end) {
      cout << begin * 2 + end << endl;
    } else {
      cout << begin + end * 2 << endl;
    }
  }

  return 0;
}
