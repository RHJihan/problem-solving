// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1243
#include <iostream>
using namespace std;

int main() {
  long long x;
  while (cin >> x) {
    long long sum = (x * (x + 1) / 2) * (x * (x + 1) / 2);

    cout << sum << '\n';
  }

  return 0;
}
