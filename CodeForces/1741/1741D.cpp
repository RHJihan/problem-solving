#include <iostream>
#include <vector>
using namespace std;

int minimum_swap(vector<int> &a, int l, int r) {
  if (r - l == 1) {
    return 0;
  }

  int m = (l + r) / 2;

  int left = minimum_swap(a, l, m);
  int right = minimum_swap(a, m, r);

  if (left == -1 || right == -1) {
    return -1;
  }

  bool sorted = true;
  for (int i = l; i < r - 1; i++) {
    if (a[i] > a[i + 1]) {
      sorted = false;
      break;
    }
  }
  if (sorted) {
    return left + right;
  }

  for (int i = 0; i < (m - l); i++) {
    swap(a[l + i], a[m + i]);
  }

  bool sorted_after_swap = true;
  for (int i = l; i < r - 1; i++) {
    if (a[i] > a[i + 1]) {
      sorted_after_swap = false;
      break;
    }
  }

  if (!sorted_after_swap) {
    return -1;
  }

  return left + right + 1;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int m;
    cin >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
      cin >> a[i];
    }

    cout << minimum_swap(a, 0, m) << endl;
  }

  return 0;
}
