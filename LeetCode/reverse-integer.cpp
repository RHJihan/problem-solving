#include <climits>
#include <iostream>
using namespace std;

int reverse(int x) {
  int reversed = 0;

  while (x != 0) {
    int digit = x % 10;
    x /= 10;

    if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) {
      return 0;
    }
    if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8)) {
      return 0;
    }

    reversed = reversed * 10 + digit;
  }

  return reversed;
}

int main() {
  cout << reverse(123) << endl;
  return 0;
}
