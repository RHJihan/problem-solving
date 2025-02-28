// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2384
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
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  while (true) {
    int n, d, r;
    cin >> n >> d >> r;

    if (n == 0 && d == 0 && r == 0) {
      break;
    }

    vector<int> morning(n);
    vector<int> evening(n);
    vector<int> evening_rev;

    for (int i = 0; i < n; i++) {
      cin >> morning[i];
    }

    for (int i = 0; i < n; i++) {
      cin >> evening[i];
    }
    merge_sort(morning, 0, n - 1);
    merge_sort(evening, 0, n - 1);

    for (int i = n - 1; i >= 0; i--) {
      evening_rev.push_back(evening[i]);
    }

    int overtime = 0;

    for (int i = 0; i < n; i++) {
      int total_route = morning[i] + evening_rev[i];
      if (total_route > d) {
        overtime += (total_route - d) * r;
      }
    }

    cout << overtime << '\n';
  }

  return 0;
}
