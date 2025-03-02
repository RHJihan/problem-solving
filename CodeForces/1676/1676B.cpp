// https://codeforces.com/contest/1676/problem/B
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int l, int m, int r) {
  int leftL = m - l + 1;
  int rightL = r - m;

  vector<int> tmpL(leftL);
  vector<int> tmpR(rightL);

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
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif
  

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> candy(n);
    for (int i = 0; i < n; i++) {
      cin >> candy[i];
    }
    merge_sort(candy, 0, n - 1);
    int count = 0;

    for (int i = 1; i < n; i++) {
      count += candy[i] - candy[0];
    }
    cout << count << endl;
  }

  return 0;
}