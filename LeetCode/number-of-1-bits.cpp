// https://leetcode.com/problems/number-of-1-bits/description/
#include <iostream>
using namespace std;

int hammingWeight(int n) {
  int count = 0;

  while (n > 0) {
    if (n % 2 == 1) {
      count++;
    }
    n = n / 2;
  }

  return count;
}

int main() {
  cout << hammingWeight(11) << endl;
  return 0;
}
