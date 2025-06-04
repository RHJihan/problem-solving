#include <iostream>
#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int> &flowerbed, int n) {
  int size = (int)flowerbed.size();

  for (int i = 0; i < size; i++) {
    if (n <= 0) {
      return true;
    }

    if (flowerbed[i] == 0) {
      bool left = (i == 0) || (flowerbed[i - 1] == 0);
      bool right = (i == size - 1) || (flowerbed[i + 1] == 0);

      if (left && right) {
        flowerbed[i] = 1;
        n--;
      }
    }
  }

  return n <= 0;
}

int main() {
  vector<int> flowerbed = {1, 0, 0, 0, 1};
  cout << canPlaceFlowers(flowerbed, 1) << endl;

  return 0;
}