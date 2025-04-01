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
    int h, m;
    cin >> h >> m;
    cout << (23 - h) * 60 + (60 - m) << endl;
  }

  return 0;
}