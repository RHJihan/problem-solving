// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1020
#include <iostream>
using namespace std;

int main() {
  long long N;

  while (true) {
    cin >> N;

    if (N < 0) {
      break;
    }
    cout << (N * (N + 1)) / 2 + 1 << '\n';
  }

  return 0;
}
