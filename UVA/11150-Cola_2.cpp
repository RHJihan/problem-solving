// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2091
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int n;
  while (cin >> n) {
    int total = n;
    int empty = n + 1;

    while (empty >= 3) {
      int newCola = empty / 3;
      total += newCola;
      empty = empty % 3 + newCola;
    }
    cout << total << '\n';
  }
  return 0;
}
