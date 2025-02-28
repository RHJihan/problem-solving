#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int count = 0;
  while (n--) {
    int input;
    cin >> input;

    if (input % k == 0) {
      count++;
    }
  }
  cout << count << '\n';

  return 0;
}