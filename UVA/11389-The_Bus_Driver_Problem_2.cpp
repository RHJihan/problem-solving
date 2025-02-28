// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2384
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
    mergeSort(morning, 0, n - 1);
    mergeSort(evening, 0, n - 1);

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
