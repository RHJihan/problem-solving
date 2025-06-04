#include <iostream>
#include <set>
using namespace std;

int sum_square(int n) {
  int sum = 0;
  while (n > 0) {
    int digit = n % 10;
    sum += digit * digit;
    n /= 10;
  }
  return sum;
}

bool isHappy(int n) {
  set<int> seen;

  while (n != 1 && seen.find(n) == seen.end()) {
    seen.insert(n);
    n = sum_square(n);
  }

  return n == 1;
}

int main() {
  cout << isHappy(19) << endl;

  return 0;
}