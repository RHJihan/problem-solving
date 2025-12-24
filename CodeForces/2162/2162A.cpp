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
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int max_value = a[0];
    for (int i = 1; i < n; i++) {
      if (a[i] > max_value) {
        max_value = a[i];
      }
    }

    cout << max_value << endl;
  }

  return 0;
}
