// https://www.hackerrank.com/challenges/drawing-book/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, pg;
  cin >> n >> p;
  int arr[n];
  pg = (p / 2);

  pg = min((n / 2) - pg, pg);

  cout << pg << endl;
  return 0;
}