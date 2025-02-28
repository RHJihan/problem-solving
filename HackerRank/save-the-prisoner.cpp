// https://www.hackerrank.com/challenges/save-the-prisoner/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int prisoner, sweets, start, result;
    cin >> prisoner >> sweets >> start;
    result = (sweets + start - 1) % prisoner;

    cout << (result == 0 ? prisoner : result) << '\n';
  }
  return 0;
}
