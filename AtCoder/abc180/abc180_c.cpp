// https://atcoder.jp/contests/abc180/tasks/abc180_c
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<long long> &arr, long long l, long long m, long long r) {
  long long leftL = m - l + 1;
  long long rightL = r - m;

  long long tmpL[leftL];
  long long tmpR[rightL];

  for (long long i = 0; i < leftL; i++) {
    tmpL[i] = arr[l + i];
  }

  for (long long i = 0; i < rightL; i++) {
    tmpR[i] = arr[m + 1 + i];
  }

  long long i, j, k;

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

void merge_sort(vector<long long> &arr, long long l, long long r) {
  if (l < r) {
    long long m = l + (r - l) / 2;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  long long n;
  cin >> n;

  vector<long long> divisors;

  for (long long i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      divisors.push_back(i);
      if (i != n / i) {
        divisors.push_back(n / i);
      }
    }
  }

  merge_sort(divisors, 0, divisors.size() - 1);

  for (long long d : divisors) {
    cout << d << endl;
  }

  return 0;
}
