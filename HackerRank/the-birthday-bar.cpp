// https://www.hackerrank.com/challenges/the-birthday-bar/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int d, m;
  cin >> d >> m;
  int count = 0;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < i + m; j++) {
      sum += arr[j];
    }
    if (sum == d) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}