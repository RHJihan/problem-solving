#include <iostream>
using namespace std;

int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int x, y;
    cin >> x >> y;

    if (gcd(x, y) > 1) {
      cout << 0 << endl;
    }

    else if (gcd(x + 1, y) > 1 || gcd(x, y + 1) > 1) {
      cout << 1 << endl;
    }

    else {
      cout << 2 << endl;
    }
  }

  return 0;
}
