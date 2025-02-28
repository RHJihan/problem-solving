// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1287
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int n, k;

  while (cin >> n >> k) {
    int total = n;
    int butts = n;

    while (butts >= k) {
      int new_cigarettes = butts / k;
      total += new_cigarettes;
      butts = (butts % k) + new_cigarettes;
    }
    cout << total << '\n';
  }

  return 0;
}
