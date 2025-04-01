#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, x, y;
  cin >> n >> x >> y;

  string number;
  cin >> number;

  int count = 0;

  for (int i = n - x; i < n; i++) {
    if (i == n - y - 1) {
      if (number[i] != '1') {
        count++;
      }
    } else {
      if (number[i] != '0') {
        count++;
      }
    }
  }

  cout << count << endl;
  return 0;
}