#include <iostream>
using namespace std;

int guess(int num) {
  if (num > 6) {
    return -1;
  }
  if (num < 6) {
    return 1;
  }
  return 0;
}

int guessNumber(int n) {
  int low = 1;
  int high = n;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    int result = guess(mid);

    if (result == 0) {
      return mid;
    } else if (result < 0) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  return -1;
}

int main() {
  cout << guessNumber(10) << endl;

  return 0;
}