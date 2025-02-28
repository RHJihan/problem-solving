// https://www.hackerrank.com/challenges/library-fine/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int re_d, re_m, re_y, due_d, due_m, due_y, fine;
  cin >> re_d >> re_m >> re_y >> due_d >> due_m >> due_y;

  if (due_y == re_y && due_m == re_m && due_d < re_d) {
    fine = 15 * (re_d - due_d);
  } else if (due_y == re_y && due_m < re_m) {
    fine = 500 * (re_m - due_m);
  } else if (due_y < re_y) {
    fine = 10000;
  }

  cout << fine << '\n';

  return 0;
}