#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int L, v, l, r;
    cin >> L >> v >> l >> r;

    int total = L / v;
    int blocked = r / v - (l - 1) / v;

    cout << total - blocked << endl;
  }

  return 0;
}
