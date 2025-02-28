// https://lightoj.com/problem/points-in-segments
#include <iostream>
#include <vector>
using namespace std;

int lower_bound(vector<int> &num, int key) {
  int low = 0, high = num.size() - 1;
  while (low < high) {
    int mid = low + (high - low) / 2;
    if (num[mid] < key) {
      low = mid + 1;
    } else {
      high = mid;
    }
  }
  return (num[low] >= key) ? low : num.size();
}

int upper_bound(vector<int> &num, int key) {
  int low = 0, high = num.size() - 1;
  while (low < high) {
    int mid = low + (high - low) / 2;
    if (num[mid] <= key) {
      low = mid + 1;
    } else {
      high = mid;
    }
  }
  return (num[low] > key) ? low : num.size();
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    int n, q;
    cin >> n >> q;

    vector<int> points(n);
    for (int j = 0; j < n; j++) {
      cin >> points[j];
    }

    cout << "Case " << i << ":\n";

    while (q--) {
      int A, B;
      cin >> A >> B;

      int left = lower_bound(points, A);
      int right = upper_bound(points, B);

      int count = right - left;
      cout << count << '\n';
    }
  }

  return 0;
}
