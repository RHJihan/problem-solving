// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int find) {
  int left = 0, right = arr.size() - 1;
  int result = -1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == find) {
      result = mid;
      right = mid - 1;
    } else if (arr[mid] < find) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return result;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  (void)!freopen("output.txt", "w", stdout);
#endif
  int case_count = 1;

  while (true) {
    int N, Q;
    cin >> N >> Q;

    if (N == 0 && Q == 0) {
      break;
    }

    vector<int> marbles(N);

    for (int i = 0; i < N; i++) {
      cin >> marbles[i];
    }

    sort(marbles.begin(), marbles.end());

    cout << "CASE# " << case_count << ":" << endl;

    for (int i = 0; i < Q; i++) {
      int find;
      cin >> find;

      int index = binarySearch(marbles, find);

      if (index != -1) {

        cout << find << " found at " << (index + 1) << endl;
      } else {

        cout << find << " not found" << endl;
      }
    }

    case_count++;
  }

  return 0;
}
