// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2457
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

  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    vector<int> age(n);
    for (int i = 0; i < n; i++) {
      cin >> age[i];
    }

    merge_sort(age, 0, n - 1);

    for (int i = 0; i < n; i++) {
      if (i == n - 1) {
        cout << age[i];
      } else {
        cout << age[i] << " ";
      }
    }
    cout << endl;
  }

  return 0;
}