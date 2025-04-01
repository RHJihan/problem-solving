#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, m;
  cin >> n >> m;

  if (m % n != 0) {
    cout << -1 << endl;
  } else {
    int moves = 0;
    int ratio = m / n;

    while (ratio % 2 == 0) {
      ratio /= 2;
      moves++;
    }
    while (ratio % 3 == 0) {
      ratio /= 3;
      moves++;
    }
    cout << ((ratio == 1) ? moves : -1) << endl;
  }
  return 0;
}
