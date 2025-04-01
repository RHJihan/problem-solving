#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int l, int m, int r) {
  int left = m - l + 1;
  int right = r - m;

  vector<int> tmpLeft(left);
  vector<int> tmpRight(right);

  for (int i = 0; i < left; i++) {
    tmpLeft[i] = arr[l + i];
  }

  for (int i = 0; i < right; i++) {
    tmpRight[i] = arr[m + 1 + i];
  }

  int i, j, k;

  for (i = 0, j = 0, k = l; k <= r; k++) {
    if ((i < left) && (j >= right || tmpLeft[i] <= tmpRight[j])) {
      arr[k] = tmpLeft[i];
      i++;
    } else {
      arr[k] = tmpRight[j];
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
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;

  vector<int> skills(n);
  for (int i = 0; i < n; i++) {
    cin >> skills[i];
  }

  merge_sort(skills, 0, n - 1);

  int total = 0;
  for (int i = 0; i < n; i += 2) {
    total += skills[i + 1] - skills[i];
  }

  cout << total << endl;

  return 0;
}
