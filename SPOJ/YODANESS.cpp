// https://www.spoj.com/problems/YODANESS/en/
#include <iostream>
#include <map>
#include <vector>
using namespace std;

long long mergeAndCount(vector<int> &arr, int left, int mid, int right) {
  int i = left, j = mid, k = 0;
  long long inversions = 0;
  vector<int> temp(right - left + 1);

  while (i < mid && j <= right) {
    if (arr[i] <= arr[j]) {
      temp[k++] = arr[i++];
    } else {
      temp[k++] = arr[j++];
      inversions += mid - i;
    }
  }

  while (i < mid)
    temp[k++] = arr[i++];
  while (j <= right)
    temp[k++] = arr[j++];

  for (i = left, k = 0; i <= right; ++i, ++k) {
    arr[i] = temp[k];
  }

  return inversions;
}

long long mergeSortAndCount(vector<int> &arr, int left, int right) {
  long long inversions = 0;
  if (left < right) {
    int mid = left + (right - left) / 2;

    inversions += mergeSortAndCount(arr, left, mid);
    inversions += mergeSortAndCount(arr, mid + 1, right);
    inversions += mergeAndCount(arr, left, mid + 1, right);
  }
  return inversions;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<string> yodaStatement(n), normalStatement(n);
    for (int i = 0; i < n; ++i) {
      cin >> yodaStatement[i];
    }
    for (int i = 0; i < n; ++i) {
      cin >> normalStatement[i];
    }

    map<string, int> normalIndex;
    for (int i = 0; i < n; ++i) {
      normalIndex[normalStatement[i]] = i;
    }

    vector<int> indices(n);
    for (int i = 0; i < n; ++i) {
      indices[i] = normalIndex[yodaStatement[i]];
    }

    long long yodanessLevel = mergeSortAndCount(indices, 0, n - 1);

    cout << yodanessLevel << '\n';
  }

  return 0;
}
