#include <iostream>
using namespace std;

int sum_of_digits(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n = n / 10;
  }
  return sum;
}

int main() {
  int a;
  cin >> a;

  while (true) {
    if (sum_of_digits(a) % 4 == 0) {
      cout << a << endl;
      break;
    }
    a++;
  }

  return 0;
}
