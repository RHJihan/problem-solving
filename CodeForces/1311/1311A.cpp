#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;

    if (a == b) {
      cout << 0 << endl;
    } else if (a < b) {
      int diff = b - a;
      if (diff % 2 == 1) {
        cout << 1 << endl;
      } else {
        cout << 2 << endl;
      }
    } else {
      int diff = a - b;
      if (diff % 2 == 0) {
        cout << 1 << endl;
      } else {
        cout << 2 << endl;
      }
    }
  }
  return 0;
}