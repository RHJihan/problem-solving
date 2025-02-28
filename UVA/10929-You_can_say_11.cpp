// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1870
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt","w",stdout);
#endif

  while (true) {
    string num;
    cin >> num;
    if (num == "0") {
      break;
    }

    int odd = 0, even = 0;
    for (int i = 0; i < num.size(); i++) {
      if (i % 2 == 0) {
        odd += (num[i] - '0');
      } else {
        even += (num[i] - '0');
      }
    }

    if ((odd - even) % 11 == 0) {
      cout << num << " is a multiple of 11." << endl;
    } else {
      cout << num << " is not a multiple of 11." << endl;
    }
  }

  return 0;
}
