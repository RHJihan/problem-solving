#include <iostream>
#include <climits>
using namespace std;

bool isPalindrome(int x) {
  if (x < 0)
    return false;

  int original = x;
  int reversed = 0;

  while (x != 0) {
    int digit = x % 10;

    if (reversed > (INT_MAX - digit) / 10) {
      return false; 
    }

    reversed = reversed * 10 + digit;
    x /= 10;
  }

  return original == reversed;
}

int main() {
  int x = 121;

  if (isPalindrome(x)) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }

  return 0;
}
