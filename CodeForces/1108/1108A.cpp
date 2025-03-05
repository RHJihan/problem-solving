#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int q;
  cin >> q;

  while (q--) {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int a = l1;
    int b = l2;

    if (a == b) {
      b = l2 + 1;
    }

    cout << a << " " << b << endl;
  }

  return 0;
}
