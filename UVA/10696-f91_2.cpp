// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1637
#include <iostream>
using namespace std;

int f91(int n) {
  if (n >= 101) {
    return n - 10;
  }
  return f91(f91(n + 11));
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int n;
  while (cin >> n) {
    if (n == 0) {
      break;
    }
    cout << "f91(" << n << ") = " << f91(n) << '\n';
  }

  return 0;
}
