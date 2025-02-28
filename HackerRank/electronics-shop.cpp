// https://www.hackerrank.com/challenges/electronics-shop/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int budget, k, u, total = INT_MIN;
  cin >> budget >> k >> u;
  int keyboard[k], usb[u];
  for (int i = 0; i < k; i++) {
    cin >> keyboard[i];
  }

  for (int i = 0; i < u; i++) {
    cin >> usb[i];
  }

  for (int i = 0; i < k; i++) {
    for (int j = 0; j < u; j++) {
      if (keyboard[i] + usb[j] <= budget) {
        total = max(total, keyboard[i] + usb[j]);
      }
    }
  }

  cout << (total != INT_MIN ? total : -1) << endl;

  return 0;
}