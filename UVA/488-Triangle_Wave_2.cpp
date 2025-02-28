// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=429
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  bool firstCase = true;

  while (t--) {
    if (!firstCase) {
      cout << '\n';
    }
    firstCase = false;

    int amp, freq;
    cin >> amp >> freq;

   for (int i = 0; i < freq; i++) {
      for (int j = 1; j <= amp; j++) {
        for (int k = 0; k < j; k++) {
          cout << j;
        }
        cout << '\n';
      }
      for (int j = amp - 1; j >= 1; j--) {
        for (int k = 0; k < j; k++) {
          cout << j;
        }
        cout << '\n';
      }

      if (i < freq - 1) {
        cout << '\n';
      }
    }
  }

  return 0;
}
