// https://www.hackerrank.com/challenges/chocolate-feast/problem

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, c, m;
    cin >> n >> c >> m;

    int total = n / c;
    int wrappers = total;

    while (wrappers >= m) {
      int free = wrappers / m;
      total += free;
      wrappers = (wrappers % m) + free;
    }

    cout << total << '\n';
  }
  return 0;
}
