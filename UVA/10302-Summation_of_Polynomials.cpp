// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1243
#include <iostream>
using namespace std;

int main() {
  int x;
  while (cin >> x) {
    long long sum = ((long long)x * ((long long)x + 1L) / 2L) *
                    ((long long)x * ((long long)x + 1L) / 2L);

    cout << sum << endl;
  }

  return 0;
}
