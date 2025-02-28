// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int min_score = arr[0], max_score = arr[0];
  int count_min = 0, count_max = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] < min_score) {
      min_score = arr[i];
      count_min++;
    } else if (arr[i] > max_score) {
      max_score = arr[i];
      count_max++;
    }
  }

  cout << count_max << " " << count_min << endl;

  return 0;
}