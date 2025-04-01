#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t; 
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    int remainder = a % b;

    if (remainder == 0) {
      cout << 0 << endl;
    } else {
      cout << b - remainder << endl;
    }
  }

  return 0;
}
