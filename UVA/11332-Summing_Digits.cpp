// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2307
#include <iostream>
using namespace std;

int sumDigit(int n) {
  while (n >= 10) {
    int sum = 0;
    while (n > 0) {
      sum += n % 10;
      n /= 10;
    }
    n = sum;
  }
  return n;
}

int main() {
  while (true) {
    int n;
    cin >> n;

    if (n == 0) {
      break;
    }
    
    cout << sumDigit(n) << '\n';
  }

  return 0;
}
