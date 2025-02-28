// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1998
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

int binarySearch(vector<int> &prices, int target, int start) {
  int left = start, right = prices.size() - 1;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (prices[mid] == target) {
      return mid;
    } else if (prices[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return -1;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int N;

  while (cin >> N) {
    vector<int> prices(N);
    for (int i = 0; i < N; ++i) {
      cin >> prices[i];
    }

    int M;
    cin >> M;

    merge_sort(prices, 0, N - 1);

    int best_i = -1, best_j = -1;

    for (int i = 0; i < N - 1; ++i) {
      int rest = M - prices[i];
      int index = binarySearch(prices, rest, i + 1);
      if (index != -1) {
          best_i = prices[i];
          best_j = prices[index];
      }
    }

    cout << "Peter should buy books whose prices are " << best_i << " and "
         << best_j << ".\n\n";
  }

  return 0;
}
