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
    cout << 1 << " ";
    for (int i = n; i > 2; i--) {
      cout << i << " ";
    }
    cout << 2 << endl;
  }

  return 0;
}