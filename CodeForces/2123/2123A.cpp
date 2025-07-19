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
    int n;
    cin >> n;
    if (n % 4 == 0) {
      cout << "Bob" << endl;
    } else {
      cout << "Alice" << endl;
    }
  }

  return 0;
}