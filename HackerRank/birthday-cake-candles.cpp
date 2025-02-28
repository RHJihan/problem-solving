// https://www.hackerrank.com/challenges/birthday-cake-candles/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, max_s = 0, count = 0;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    max_s = max(max_s, arr[i]);
  }

  for (int i = 0; i < n; i++) {
    if (max_s == arr[i]) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}