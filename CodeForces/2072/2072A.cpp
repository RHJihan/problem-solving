// https://codeforces.com/contest/2072/problem/A
#include <cmath>
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n, k, p;
    cin >> n >> k >> p;

    int min_possible_sum = n * (-p);
    int max_possible_sum = n * p;

    if (k < min_possible_sum || k > max_possible_sum) {
      cout << -1 << endl;
      continue;
    }

    cout << ceil(abs(k) / (double)p) << endl;
  }

  return 0;
}
