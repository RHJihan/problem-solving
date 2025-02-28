// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552
#include <iostream>
#include <vector>

using namespace std;

int tallest_shorter(vector<int> &num, int key) {
  int low = 0, high = num.size() - 1;
  int result = -1;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (num[mid] < key) {
      result = mid;
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return result;
}

int upper_bound(vector<int> &num, int key) {
  int low = 0, high = num.size() - 1;
  while (high - low > 1) {
    int mid = high + (low - high) / 2;
    if (num[mid] <= key) {
      low = mid + 1;
    } else {
      high = mid;
    }
  }
  if (num[low] > key) {
    return low;
  }
  if (num[high] > key) {
    return high;
  }
  return -1;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt", "w", stdout);
#endif

  int N;
  cin >> N;

  vector<int> heights(N);
  for (int i = 0; i < N; ++i) {
    cin >> heights[i];
  }

  int q;
  cin >> q;

  while (q--) {
    int lh;
    cin >> lh;

    int idx_tallest_shorter = tallest_shorter(heights, lh);
    int idx_upper_bound = upper_bound(heights, lh);

    int first = heights[idx_tallest_shorter], second = heights[idx_upper_bound];

    if (idx_tallest_shorter != -1 && idx_upper_bound != -1) {
      cout << first << " " << second << '\n';
    } else if (idx_tallest_shorter == -1 && idx_upper_bound != -1) {
      cout << 'X' << " " << second << '\n';
    } else if (idx_tallest_shorter != -1 && idx_upper_bound == -1) {
      cout << first << " " << 'X' << '\n';
    }
  }

  return 0;
}
