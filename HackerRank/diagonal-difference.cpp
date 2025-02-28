// https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  int left = 0, right = 0;

  for (int i = 0, j = n - 1; i < n; i++, j--) {
    left += arr[i][i];
    right += arr[i][j];
  }

  cout << ((right > left) ? right - left : left - right) << endl;

  return 0;
}