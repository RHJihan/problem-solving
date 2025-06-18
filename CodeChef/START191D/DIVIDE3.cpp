#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  if (n % 3 == 0) {
    cout << 0 << endl;
    return 0;
  }

  cout << (n / 3 + 1) - (n / 3) << endl;
  return 0;
}