// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=854
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
// (void)!freopen("output.txt","w",stdout);
#endif

  long long n;

  while (cin >> n) {
    long long i = 2;
    long long element = 1;
    long long count = 1;
    while (true) {
      element = i + element;
      i = i + 4;
      count += 2;
      if (count == n + 2) {
        break;
      }
    }
    cout << (element - 2) + (element - 4) + (element - 6) << endl;
  }

  return 0;
}