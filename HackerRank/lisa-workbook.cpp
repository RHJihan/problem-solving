// https://www.hackerrank.com/challenges/lisa-workbook/problem

#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int page = 1;
  int special = 0;

  for (int i = 0; i < n; i++) {
    int problems = arr[i];

    for (int j = 1; j <= problems; j++) {
      if (j == page) {
        special++;
      }
      if (j == problems || j % k == 0) {
        page++;
      }
    }
  }

  cout << special << '\n';
  return 0;
}
