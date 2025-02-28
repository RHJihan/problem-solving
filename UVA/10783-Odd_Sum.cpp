// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1724
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = a; i <= b; i++) {
      if (i % 2 != 0)
        sum += i;
    }
    cout << "Case " << i << ": " << sum << '\n';
  }

  return 0;
}