#include <iostream>
using namespace std;

int arrangeCoins(int n) {
  int row = 0;
  while (n >= row + 1) {
    row++;
    n -= row;
  }
  return row;
}

int main() {
  cout << arrangeCoins(5) << endl;

  return 0;
}