// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2354
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int l, int m, int r) {
  int leftL = m - l + 1;
  int rightL = r - m;

  int tmpL[leftL];
  int tmpR[rightL];

  for (int i = 0; i < leftL; i++) {
    tmpL[i] = arr[l + i];
  }

  for (int i = 0; i < rightL; i++) {
    tmpR[i] = arr[m + 1 + i];
  }

  int i, j, k;

  for (i = 0, j = 0, k = l; k <= r; k++) {
    if ((i < leftL) && (j >= rightL || tmpL[i] <= tmpR[j])) {
      arr[k] = tmpL[i];
      i++;
    } else {
      arr[k] = tmpR[j];
      j++;
    }
  }
}

void merge_sort(vector<int> &arr, int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  (void)!freopen("output.txt", "w", stdout);
#endif
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> prices(n);
    vector<int> prices_rev;
    for (int i = 0; i < n; ++i) {
      cin >> prices[i];
    }

    merge_sort(prices, 0, n - 1);

    for (int i = n - 1; i >= 0; i--) {
      prices_rev.push_back(prices[i]);
    }

    int max_discount = 0;

    for (int i = 2; i < n; i += 3) {
      max_discount += prices_rev[i];
    }

    cout << max_discount << '\n';
  }

  return 0;
}
