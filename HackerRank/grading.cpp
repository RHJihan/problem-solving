// https://www.hackerrank.com/challenges/grading/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];

    if (arr[i] > 37 && arr[i] < 100) {
      if (arr[i] % 5 == 3) {
        arr[i] += 2;
      }
      if (arr[i] % 5 == 4)
        arr[i] += 1;
    }
    cout << arr[i] << endl;
  }
  return 0;
}