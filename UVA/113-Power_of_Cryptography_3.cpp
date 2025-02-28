// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=49
#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
// (void)!freopen("output.txt","w",stdout);
#endif

  double n, p;
  cout << fixed << setprecision(0);
  while (cin >> n >> p) {
    cout << pow(p, 1 / n) << '\n';
  }

  return 0;
}