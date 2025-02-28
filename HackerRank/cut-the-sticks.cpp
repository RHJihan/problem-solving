// https://www.hackerrank.com/challenges/cut-the-sticks/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int cut = 1001;
  int done = 0;
  for (int i = 0; i < n; i++) {}j

    if (done == n) {
      break;
    }
    if (arr[i] < cut && arr[i] > 0) {
      cut = arr[i];
    }

    if (i == n - 1) {
      cout << "cut = " << cut << endl;
      int count = 0;
      for (int j = 0; j < n; j++) {
        if (arr[j] == cut) {
          arr[j] = 0;
          done++;
          count++;
        } else {
          arr[j] -= cut;
        }
      }
      cout << n - count << '\n';

      i = -1;
    }
  }

  return 0;
}