#include <iostream>
using namespace std;

int countDigits(int num) {
  int org = num;
  int count = 0;

  while (num > 0) {
    int digit = num % 10;
    if (digit != 0 && org % digit == 0) {
      count++;
    }
    num = num / 10;
  }

  return count;
}

int main() {
  cout << countDigits(7) << endl;

  return 0;
}