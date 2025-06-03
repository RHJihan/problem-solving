#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    int max_val = max({a, b, c});

    int needed = (max_val - a) + (max_val - b) + (max_val - c);

    if (n >= needed && (n - needed) % 3 == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
