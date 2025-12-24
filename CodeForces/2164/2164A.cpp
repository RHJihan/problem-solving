#include <algorithm>
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
    vector<int> num(n);
    for (int i = 0; i < n; i++) {
      cin >> num[i];
    }
    int x;
    cin >> x;

    sort(num.begin(), num.end());

    if (x >= num[0] && x <= num[n - 1]) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}