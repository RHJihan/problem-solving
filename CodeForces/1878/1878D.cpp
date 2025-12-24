#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
#endif
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    s = " " + s;

    vector<int> L(k + 1), R(k + 1);
    for (int i = 1; i <= k; i++)
      cin >> L[i];
    for (int i = 1; i <= k; i++)
      cin >> R[i];

    int q;
    cin >> q;

    vector<int> diff(n + 2, 0);

    for (int j = 0; j < q; j++) {
      int x;
      cin >> x;

      int i = (int)(upper_bound(L.begin() + 1, L.begin() + k + 1, x) - L.begin() - 1);

      int other = L[i] + R[i] - x;
      int a = min(x, other);
      int b = max(x, other);

      diff[a]++;
      diff[b]--;
    }

    for (int i = 1; i <= n; i++) {
      diff[i] += diff[i - 1];
    }

    for (int i = 1; i <= k; i++) {
      int l = L[i], r = R[i];
      int len = r - l + 1;

      for (int p = 0; p < len / 2; p++) {
        int leftPos = l + p;
        int rightPos = r - p;

        if (diff[leftPos] % 2 == 1) {
          swap(s[leftPos], s[rightPos]);
        }
      }
    }

    for (int i = 1; i <= n; i++)
      cout << s[i];
    cout << endl;
  }
  return 0;
}