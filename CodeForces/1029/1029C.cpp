#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  int lefts[300005];
  int rights[300005];
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> lefts[i] >> rights[i];
  }

  vector<int> prefix_max_left(n), suffix_max_left(n);
  vector<int> prefix_min_right(n), suffix_min_right(n);

  prefix_max_left[0] = lefts[0];
  for (int i = 1; i < n; ++i) {
    prefix_max_left[i] = max(prefix_max_left[i - 1], lefts[i]);
  }

  suffix_max_left[n - 1] = lefts[n - 1];
  for (int i = n - 2; i >= 0; --i) {
    suffix_max_left[i] = max(suffix_max_left[i + 1], lefts[i]);
  }

  prefix_min_right[0] = rights[0];
  for (int i = 1; i < n; ++i) {
    prefix_min_right[i] = min(prefix_min_right[i - 1], rights[i]);
  }

  suffix_min_right[n - 1] = rights[n - 1];
  for (int i = n - 2; i >= 0; --i) {
    suffix_min_right[i] = min(suffix_min_right[i + 1], rights[i]);
  }

  int result = 0;

  for (int i = 0; i < n; ++i) {
    int left, right;

    if (i == 0) {
      left = suffix_max_left[1];
    } else if (i == n - 1) {
      left = prefix_max_left[n - 2];
    } else {
      left = max(prefix_max_left[i - 1], suffix_max_left[i + 1]);
    }

    if (i == 0) {
      right = suffix_min_right[1];
    } else if (i == n - 1) {
      right = prefix_min_right[n - 2];
    } else {
      right = min(prefix_min_right[i - 1], suffix_min_right[i + 1]);
    }

    if (left <= right) {
      result = max(result, right - left);
    }
  }

  cout << result << endl;

  return 0;
}
