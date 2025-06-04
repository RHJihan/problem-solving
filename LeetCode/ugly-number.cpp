#include <iostream>
using namespace std;

bool isUgly(int n) {
  if (n <= 0) {
    return false;
  }

  while (n % 2 == 0) {
    n = n / 2;
  }
  while (n % 3 == 0) {
    n = n / 3;
  }
  while (n % 5 == 0) {
    n = n / 5;
  }

  return n == 1;
}

int main() {
  cout << isUgly(6) << endl;

  return 0;
}