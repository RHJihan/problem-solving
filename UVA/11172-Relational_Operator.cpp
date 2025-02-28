// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2113
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    if (a > b) {
      cout << ">" << '\n';
    } else if (a < b) {
      cout << "<" << '\n';
    } else {
      cout << "=" << '\n';
    }
  }

  return 0;
}