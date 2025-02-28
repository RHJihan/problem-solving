// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2126
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;

  while (true) {
    cin >> n;

    if (n < 0) {
      break;
    }

    if (n == 0) {
      cout << "0" << endl;
      continue;
    }

    vector<int> ternary;

    while (n > 0) {
      ternary.push_back(n % 3);
      n /= 3;
    }

    for (int i = ternary.size() - 1; i >= 0; --i) {
      cout << ternary[i];
    }
    cout << '\n';
  }

  return 0;
}
