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

    int first;
    cin >> first;

    int min_val = first;

    for (int i = 1; i < n; i++) {
      int current;
      cin >> current;
      min_val = min(min_val, current);
    }

    if (first > min_val) {
      cout << "Alice" << endl;
    } else {
      cout << "Bob" << endl;
    }
  }

  return 0;
}
