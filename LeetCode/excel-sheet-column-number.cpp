#include <iostream>
using namespace std;

int titleToNumber(string columnTitle) {
  int result = 0;

  for (int i = 0; i < (int)columnTitle.size(); i++) {
    int value = columnTitle[i] - 'A' + 1;
    result = result * 26 + value;
  }

  return result;
}

int main() {
  cout << titleToNumber("A") << endl;

  return 0;
}
