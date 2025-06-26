#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;

  vector<int> petals(n);
  int total = 0;
  int small_odd = 101;

  for (int i = 0; i < n; ++i) {
    cin >> petals[i];
    total += petals[i];
    if (petals[i] % 2 == 1) {
      small_odd = min(small_odd, petals[i]);
    }
  }

  if (total % 2 == 1) {
    cout << total << endl;
  }

  else if (small_odd != 101) {
    cout << total - small_odd << endl;
  }

  else {
    cout << 0 << endl;
  }

  return 0;
}
