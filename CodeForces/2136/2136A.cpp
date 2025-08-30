#include <iostream>
using namespace std;

bool valid(int x, int y) {
  int mx = max(x, y);
  int mn = min(x, y);

  if (mx <= 2 + 2 * mn) {
    return true;
  }
  return false;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int first_r = a, first_k = b;
    int second_r = c - a, second_k = d - b;

    if (valid(first_r, first_k) && valid(second_r, second_k))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
