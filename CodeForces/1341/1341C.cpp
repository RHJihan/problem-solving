#include <iostream>
#include <vector>
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

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }

    bool valid = true;
    for (int i = 1; i < n; i++) {
      if (!(p[i] == p[i - 1] + 1 || p[i] < p[i - 1])) {
        valid = false;
        break;
      }
    }

    if (valid)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  return 0;
}
