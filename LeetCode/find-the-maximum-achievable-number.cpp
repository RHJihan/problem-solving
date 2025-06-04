#include <iostream>
using namespace std;

int theMaximumAchievableX(int num, int t) {
  return num + 2 * t;
}

int main() {
  cout << theMaximumAchievableX(4, 1) << endl;

  return 0;
}