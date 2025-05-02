#include <iostream>
using namespace std;

uint32_t reverseBits(uint32_t n) {
  uint32_t result = 0;

  for (int i = 0; i < 32; ++i) {
    int last_bit = n % 2;
    result = result * 2 + last_bit;
    n = n / 2;
  }

  return result;
}

int main() {
  uint32_t input = 43261596;

  cout << reverseBits(input) << endl;
  return 0;
}
