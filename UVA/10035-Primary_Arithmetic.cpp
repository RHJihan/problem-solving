// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=976
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int num1, num2;

  while (true) {
    cin >> num1 >> num2;

    if (num1 == 0 && num2 == 0) {
      break;
    }

    int carry = 0, carryCount = 0;

    while (num1 > 0 || num2 > 0) {
      int digit1 = num1 % 10;
      int digit2 = num2 % 10;

      if (digit1 + digit2 + carry >= 10) {
        carry = 1;
        carryCount++;
      } else {
        carry = 0;
      }

      num1 /= 10;
      num2 /= 10;
    }

    if (carryCount == 0) {
      cout << "No carry operation." << '\n';
    } else if (carryCount == 1) {
      cout << carryCount << " carry operation." << '\n';
    } else {
      cout << carryCount << " carry operations." << '\n';
    }
  }

  return 0;
}
