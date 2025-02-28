// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=976
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
//   (void)!freopen("output.txt", "w", stdout);
#endif

  int a, b;

  while (true) {
    cin >> a >> b;

    if (a == 0 && b == 0) {
      break;
    }

    int carry = 0;
    int carry_count = 0;

    while (a > 0 || b > 0) {

      int sum = (a % 10) + (b % 10) + carry;

      if (sum >= 10) {
        carry = 1;
        carry_count++;
      } else {
        carry = 0;
      }
      a /= 10;
      b /= 10;
    }

    if (carry_count == 0) {
      cout << "No carry operation." << endl;
    } else if (carry_count == 1) {
      cout << "1 carry operation." << endl;
    } else {
      cout << carry_count << " carry operations." << endl;
    }
  }

  return 0;
}
