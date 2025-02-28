// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2354
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int left, int mid, int right) {
  int n1 = mid - left + 1;
  int n2 = right - mid;

  vector<int> L(n1), R(n2);

  for (int i = 0; i < n1; i++)
    L[i] = arr[left + i];
  for (int j = 0; j < n2; j++)
    R[j] = arr[mid + 1 + j];

  int i = 0, j = 0;
  int k = left;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(vector<int> &arr, int left, int right) {
  if (left >= right)
    return;

  int mid = left + (right - left) / 2;
  mergeSort(arr, left, mid);
  mergeSort(arr, mid + 1, right);
  merge(arr, left, mid, right);
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

    mergeSort(prices, 0, n - 1);

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
