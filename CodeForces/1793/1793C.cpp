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
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    vector<int> sorted = a;
    sort(sorted.begin(), sorted.end());

    int leftSorted = 0;
    int rightSorted = n - 1;

    int l = 0;
    int r = n - 1;

    bool found = false;

    while (l < r) {
      int currentMin = sorted[leftSorted];
      int currentMax = sorted[rightSorted];

      bool leftExtreme = (a[l] == currentMin || a[l] == currentMax);
      bool rightExtreme = (a[r] == currentMin || a[r] == currentMax);

      if (!leftExtreme && !rightExtreme) {
        cout << l + 1 << " " << r + 1 << endl;
        found = true;
        break;
      }

      if (a[l] == currentMin) {
        l++;
        leftSorted++;
      } else if (a[l] == currentMax) {
        l++;
        rightSorted--;
      } else if (a[r] == currentMax) {
        r--;
        rightSorted--;
      } else if (a[r] == currentMin) {
        r--;
        leftSorted++;
      }
    }

    if (!found)
      cout << -1 << endl;
  }

  return 0;
}
