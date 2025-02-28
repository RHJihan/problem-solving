// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4604
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {

    int n, k, x;
    cin >> n >> k >> x;
    int sum_total = (n * (n + 1)) / 2;
    int sum_seq = (k * (2 * x + k - 1)) / 2;
    cout << "Case " << i << ": " << sum_total - sum_seq << endl;
  }

  return 0;
}