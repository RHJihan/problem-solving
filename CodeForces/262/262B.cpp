#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, k;

  cin >> n >> k;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n && k > 0; i++) {
    if (a[i] < 0) {
      a[i] = -a[i];
      k--;
    }
  }

  if (k % 2 == 1) {
    sort(a.begin(), a.end());
    a[0] = -a[0];
  }

  int total = 0;
  for (int i = 0; i < n; i++) {
    total += a[i];
  }

  cout << total << endl;

  return 0;
}
