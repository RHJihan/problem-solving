// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=996
#include <iostream>
using namespace std;

int main() {
  long long a, b;
  while (cin >> a >> b) {
    if (a >= b) {
      cout << a - b << '\n';
    } else {
      cout << b - a << '\n';
    }
  }

  return 0;
}