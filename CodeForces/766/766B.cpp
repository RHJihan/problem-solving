// https://codeforces.com/contest/766/problem/B
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  if (n < 3) {
    cout << "NO";
  } else {
    sort(arr, arr + n);
    bool found = false;
    for (int i = 0; i < n - 2; i++) {
      if (arr[i] + arr[i + 1] > arr[i + 2]) {
        cout << "YES" << '\n';
        found = true;
        break;
      }
    }
    if (!found) {
      cout << "NO";
    }
  }

  return 0;
}