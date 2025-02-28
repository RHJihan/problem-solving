// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36
#include <iostream>
using namespace std;

int num_print(int n) {
  int count = 1;
  while (n != 1) {
    if (n % 2 != 0) {
      n = 3 * n + 1;
    } else {
      n /= 2;
    }
    count++;
  }
  return count;
}

int main() {
  int i, j;
  while (cin >> i >> j) {
    int start = min(i, j);
    int end = max(i, j);
    int maxLength = 0;

    for (int k = start; k <= end; k++) {
      maxLength = max(maxLength, num_print(k));
    }

    cout << i << " " << j << " " << maxLength << '\n';
  }

  return 0;
}
