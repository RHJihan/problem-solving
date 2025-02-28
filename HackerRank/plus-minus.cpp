// https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  float pos = 0, neg = 0, zero = 0;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n; i++) {
    if (arr[i] == 0)
      zero++;
    if (arr[i] > 0)
      pos++;
    if (arr[i] < 0)
      neg++;
  }
  cout << std::fixed << std::setprecision(5);
  cout << pos / n << endl << neg / n << endl << zero / n << endl;
  return 0;
}